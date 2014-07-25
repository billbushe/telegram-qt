/*
    Copyright (C) 2014 Alexandr Akulich <akulichalexander@gmail.com>

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include "CTelegramCore.hpp"

#include <QDebug>

#include "CAppInformation.hpp"
#include "CTelegramDispatcher.hpp"

CTelegramCore::CTelegramCore(QObject *parent) :
    QObject(parent),
    m_dispatcher(new CTelegramDispatcher(this)),
    m_appInfo(0)
{
    connect(m_dispatcher, SIGNAL(dcConfigurationObtained()), SIGNAL(connected()));
    connect(m_dispatcher, SIGNAL(phoneStatusReceived(QString,bool,bool)), SIGNAL(phoneStatusReceived(QString,bool,bool)));
    connect(m_dispatcher, SIGNAL(phoneCodeRequired()), SIGNAL(phoneCodeRequired()));
    connect(m_dispatcher, SIGNAL(phoneCodeIsInvalid()), SIGNAL(phoneCodeIsInvalid()));
    connect(m_dispatcher, SIGNAL(authenticated()), SIGNAL(authenticated()));
    connect(m_dispatcher, SIGNAL(contactListChanged()), SIGNAL(contactListChanged()));
    connect(m_dispatcher, SIGNAL(avatarReceived(QString,QByteArray,QString)), SIGNAL(avatarReceived(QString,QByteArray,QString)));
    connect(m_dispatcher, SIGNAL(messageReceived(QString,QString)), SIGNAL(messageReceived(QString,QString)));
    connect(m_dispatcher, SIGNAL(contactStatusChanged(QString,TelegramNamespace::ContactStatus)), SIGNAL(contactStatusChanged(QString,TelegramNamespace::ContactStatus)));
    connect(m_dispatcher, SIGNAL(contactTypingStatusChanged(QString,bool)), SIGNAL(contactTypingStatusChanged(QString,bool)));
}

CTelegramCore::~CTelegramCore()
{
    delete m_appInfo;
}

void CTelegramCore::setAppInformation(const CAppInformation *newAppInfo)
{
    if (!newAppInfo) {
        return;
    }

    m_appInfo = new CAppInformation(newAppInfo);
}

QByteArray CTelegramCore::connectionSecretInfo() const
{
    return m_dispatcher->connectionSecretInfo();
}

bool CTelegramCore::isAuthenticated()
{
    return m_dispatcher->isAuthenticated();
}

bool CTelegramCore::initConnection(const QString &address, quint32 port)
{
    if (!m_appInfo || !m_appInfo->isValid()) {
        qDebug() << "CTelegramCore: Can not init connection: App information is null or is not valid.";
        return false;
    }

    m_dispatcher->setAppInformation(m_appInfo);
    m_dispatcher->initConnection(address, port);

    return true;
}

bool CTelegramCore::restoreConnection(const QByteArray &secret)
{
    m_dispatcher->setAppInformation(m_appInfo);
    return m_dispatcher->restoreConnection(secret);
}

void CTelegramCore::requestPhoneStatus(const QString &phoneNumber)
{
    m_dispatcher->requestPhoneStatus(phoneNumber);
}

void CTelegramCore::requestPhoneCode(const QString &phoneNumber)
{
    m_dispatcher->requestPhoneCode(phoneNumber);
}

void CTelegramCore::signIn(const QString &phoneNumber, const QString &authCode)
{
    m_dispatcher->signIn(phoneNumber, authCode);
}

void CTelegramCore::signUp(const QString &phoneNumber, const QString &authCode, const QString &firstName, const QString &lastName)
{
    m_dispatcher->signUp(phoneNumber, authCode, firstName, lastName);
}

void CTelegramCore::addContact(const QString &phoneNumber)
{
    m_dispatcher->addContacts(QStringList() << phoneNumber);
}

void CTelegramCore::requestContactList()
{
    m_dispatcher->requestContactList();
}

void CTelegramCore::requestContactAvatar(const QString &contact)
{
    m_dispatcher->requestContactAvatar(contact);
}

QStringList CTelegramCore::contactList() const
{
    return m_dispatcher->contactList();
}

TelegramNamespace::ContactStatus CTelegramCore::contactStatus(const QString &phone) const
{
    return m_dispatcher->contactStatus(phone);
}

void CTelegramCore::sendMessage(const QString &phone, const QString &message)
{
    return m_dispatcher->sendMessageToContact(phone, message);
}

void CTelegramCore::setTyping(const QString &phone, bool typingStatus)
{
    m_dispatcher->setTyping(phone, typingStatus);
}

void CTelegramCore::setOnlineStatus(bool onlineStatus)
{
    m_dispatcher->setOnlineStatus(onlineStatus);
}
