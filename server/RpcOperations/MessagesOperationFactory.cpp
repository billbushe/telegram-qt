/*
   Copyright (C) 2018 Alexander Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#include "MessagesOperationFactory.hpp"

#include "RpcOperationFactory_p.hpp"
// TODO: Instead of this include, add a generated cpp with all needed template instances
#include "ServerRpcOperation_p.hpp"

#include "ServerApi.hpp"
#include "ServerRpcLayer.hpp"
#include "TelegramServerUser.hpp"

#include "Debug_p.hpp"
#include "RpcError.hpp"
#include "RpcProcessingContext.hpp"
#include "Utils.hpp"

#include "CTelegramStreamExtraOperators.hpp"
#include "FunctionStreamOperators.hpp"

#include <QLoggingCategory>

namespace Telegram {

namespace Server {

// Generated process methods
bool MessagesRpcOperation::processAcceptEncryption(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runAcceptEncryption);
    context.inputStream() >> m_acceptEncryption;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processAddChatUser(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runAddChatUser);
    context.inputStream() >> m_addChatUser;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processCheckChatInvite(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runCheckChatInvite);
    context.inputStream() >> m_checkChatInvite;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processClearRecentStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runClearRecentStickers);
    context.inputStream() >> m_clearRecentStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processCreateChat(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runCreateChat);
    context.inputStream() >> m_createChat;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processDeleteChatUser(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runDeleteChatUser);
    context.inputStream() >> m_deleteChatUser;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processDeleteHistory(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runDeleteHistory);
    context.inputStream() >> m_deleteHistory;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processDeleteMessages(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runDeleteMessages);
    context.inputStream() >> m_deleteMessages;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processDiscardEncryption(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runDiscardEncryption);
    context.inputStream() >> m_discardEncryption;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processEditChatAdmin(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runEditChatAdmin);
    context.inputStream() >> m_editChatAdmin;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processEditChatPhoto(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runEditChatPhoto);
    context.inputStream() >> m_editChatPhoto;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processEditChatTitle(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runEditChatTitle);
    context.inputStream() >> m_editChatTitle;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processEditInlineBotMessage(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runEditInlineBotMessage);
    context.inputStream() >> m_editInlineBotMessage;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processEditMessage(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runEditMessage);
    context.inputStream() >> m_editMessage;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processExportChatInvite(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runExportChatInvite);
    context.inputStream() >> m_exportChatInvite;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processFaveSticker(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runFaveSticker);
    context.inputStream() >> m_faveSticker;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processForwardMessage(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runForwardMessage);
    context.inputStream() >> m_forwardMessage;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processForwardMessages(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runForwardMessages);
    context.inputStream() >> m_forwardMessages;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetAllChats(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetAllChats);
    context.inputStream() >> m_getAllChats;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetAllDrafts(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetAllDrafts);
    context.inputStream() >> m_getAllDrafts;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetAllStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetAllStickers);
    context.inputStream() >> m_getAllStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetArchivedStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetArchivedStickers);
    context.inputStream() >> m_getArchivedStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetAttachedStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetAttachedStickers);
    context.inputStream() >> m_getAttachedStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetBotCallbackAnswer(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetBotCallbackAnswer);
    context.inputStream() >> m_getBotCallbackAnswer;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetChats(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetChats);
    context.inputStream() >> m_getChats;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetCommonChats(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetCommonChats);
    context.inputStream() >> m_getCommonChats;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetDhConfig(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetDhConfig);
    context.inputStream() >> m_getDhConfig;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetDialogs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetDialogs);
    context.inputStream() >> m_getDialogs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetDocumentByHash(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetDocumentByHash);
    context.inputStream() >> m_getDocumentByHash;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetFavedStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetFavedStickers);
    context.inputStream() >> m_getFavedStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetFeaturedStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetFeaturedStickers);
    context.inputStream() >> m_getFeaturedStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetFullChat(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetFullChat);
    context.inputStream() >> m_getFullChat;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetGameHighScores(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetGameHighScores);
    context.inputStream() >> m_getGameHighScores;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetHistory(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetHistory);
    context.inputStream() >> m_getHistory;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetInlineBotResults(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetInlineBotResults);
    context.inputStream() >> m_getInlineBotResults;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetInlineGameHighScores(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetInlineGameHighScores);
    context.inputStream() >> m_getInlineGameHighScores;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetMaskStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetMaskStickers);
    context.inputStream() >> m_getMaskStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetMessageEditData(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetMessageEditData);
    context.inputStream() >> m_getMessageEditData;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetMessages(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetMessages);
    context.inputStream() >> m_getMessages;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetMessagesViews(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetMessagesViews);
    context.inputStream() >> m_getMessagesViews;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetPeerDialogs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetPeerDialogs);
    context.inputStream() >> m_getPeerDialogs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetPeerSettings(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetPeerSettings);
    context.inputStream() >> m_getPeerSettings;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetPinnedDialogs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetPinnedDialogs);
    context.inputStream() >> m_getPinnedDialogs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetRecentLocations(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetRecentLocations);
    context.inputStream() >> m_getRecentLocations;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetRecentStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetRecentStickers);
    context.inputStream() >> m_getRecentStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetSavedGifs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetSavedGifs);
    context.inputStream() >> m_getSavedGifs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetStickerSet(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetStickerSet);
    context.inputStream() >> m_getStickerSet;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetUnreadMentions(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetUnreadMentions);
    context.inputStream() >> m_getUnreadMentions;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetWebPage(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetWebPage);
    context.inputStream() >> m_getWebPage;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processGetWebPagePreview(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runGetWebPagePreview);
    context.inputStream() >> m_getWebPagePreview;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processHideReportSpam(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runHideReportSpam);
    context.inputStream() >> m_hideReportSpam;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processImportChatInvite(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runImportChatInvite);
    context.inputStream() >> m_importChatInvite;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processInstallStickerSet(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runInstallStickerSet);
    context.inputStream() >> m_installStickerSet;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processMigrateChat(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runMigrateChat);
    context.inputStream() >> m_migrateChat;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReadEncryptedHistory(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReadEncryptedHistory);
    context.inputStream() >> m_readEncryptedHistory;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReadFeaturedStickers(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReadFeaturedStickers);
    context.inputStream() >> m_readFeaturedStickers;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReadHistory(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReadHistory);
    context.inputStream() >> m_readHistory;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReadMentions(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReadMentions);
    context.inputStream() >> m_readMentions;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReadMessageContents(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReadMessageContents);
    context.inputStream() >> m_readMessageContents;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReceivedMessages(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReceivedMessages);
    context.inputStream() >> m_receivedMessages;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReceivedQueue(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReceivedQueue);
    context.inputStream() >> m_receivedQueue;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReorderPinnedDialogs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReorderPinnedDialogs);
    context.inputStream() >> m_reorderPinnedDialogs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReorderStickerSets(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReorderStickerSets);
    context.inputStream() >> m_reorderStickerSets;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReportEncryptedSpam(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReportEncryptedSpam);
    context.inputStream() >> m_reportEncryptedSpam;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processReportSpam(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runReportSpam);
    context.inputStream() >> m_reportSpam;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processRequestEncryption(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runRequestEncryption);
    context.inputStream() >> m_requestEncryption;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSaveDraft(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSaveDraft);
    context.inputStream() >> m_saveDraft;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSaveGif(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSaveGif);
    context.inputStream() >> m_saveGif;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSaveRecentSticker(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSaveRecentSticker);
    context.inputStream() >> m_saveRecentSticker;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSearch(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSearch);
    context.inputStream() >> m_search;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSearchGifs(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSearchGifs);
    context.inputStream() >> m_searchGifs;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSearchGlobal(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSearchGlobal);
    context.inputStream() >> m_searchGlobal;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendEncrypted(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendEncrypted);
    context.inputStream() >> m_sendEncrypted;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendEncryptedFile(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendEncryptedFile);
    context.inputStream() >> m_sendEncryptedFile;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendEncryptedService(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendEncryptedService);
    context.inputStream() >> m_sendEncryptedService;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendInlineBotResult(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendInlineBotResult);
    context.inputStream() >> m_sendInlineBotResult;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendMedia(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendMedia);
    context.inputStream() >> m_sendMedia;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendMessage(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendMessage);
    context.inputStream() >> m_sendMessage;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSendScreenshotNotification(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSendScreenshotNotification);
    context.inputStream() >> m_sendScreenshotNotification;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetBotCallbackAnswer(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetBotCallbackAnswer);
    context.inputStream() >> m_setBotCallbackAnswer;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetBotPrecheckoutResults(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetBotPrecheckoutResults);
    context.inputStream() >> m_setBotPrecheckoutResults;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetBotShippingResults(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetBotShippingResults);
    context.inputStream() >> m_setBotShippingResults;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetEncryptedTyping(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetEncryptedTyping);
    context.inputStream() >> m_setEncryptedTyping;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetGameScore(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetGameScore);
    context.inputStream() >> m_setGameScore;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetInlineBotResults(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetInlineBotResults);
    context.inputStream() >> m_setInlineBotResults;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetInlineGameScore(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetInlineGameScore);
    context.inputStream() >> m_setInlineGameScore;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processSetTyping(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runSetTyping);
    context.inputStream() >> m_setTyping;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processStartBot(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runStartBot);
    context.inputStream() >> m_startBot;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processToggleChatAdmins(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runToggleChatAdmins);
    context.inputStream() >> m_toggleChatAdmins;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processToggleDialogPin(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runToggleDialogPin);
    context.inputStream() >> m_toggleDialogPin;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processUninstallStickerSet(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runUninstallStickerSet);
    context.inputStream() >> m_uninstallStickerSet;
    return !context.inputStream().error();
}

bool MessagesRpcOperation::processUploadMedia(RpcProcessingContext &context)
{
    setRunMethod(&MessagesRpcOperation::runUploadMedia);
    context.inputStream() >> m_uploadMedia;
    return !context.inputStream().error();
}
// End of generated process methods

// Generated run methods
void MessagesRpcOperation::runAcceptEncryption()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLEncryptedChat result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runAddChatUser()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runCheckChatInvite()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLChatInvite result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runClearRecentStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runCreateChat()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runDeleteChatUser()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runDeleteHistory()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAffectedHistory result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runDeleteMessages()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAffectedMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runDiscardEncryption()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runEditChatAdmin()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runEditChatPhoto()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runEditChatTitle()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runEditInlineBotMessage()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runEditMessage()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runExportChatInvite()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLExportedChatInvite result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runFaveSticker()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runForwardMessage()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runForwardMessages()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetAllChats()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesChats result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetAllDrafts()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetAllStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAllStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetArchivedStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesArchivedStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetAttachedStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLVector<TLStickerSetCovered> result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetBotCallbackAnswer()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesBotCallbackAnswer result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetChats()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesChats result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetCommonChats()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesChats result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetDhConfig()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesDhConfig result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetDialogs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesDialogs result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetDocumentByHash()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLDocument result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetFavedStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesFavedStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetFeaturedStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesFeaturedStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetFullChat()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesChatFull result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetGameHighScores()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesHighScores result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetHistory()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetInlineBotResults()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesBotResults result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetInlineGameHighScores()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesHighScores result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetMaskStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAllStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetMessageEditData()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessageEditData result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetMessages()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetMessagesViews()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLVector<quint32> result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetPeerDialogs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesPeerDialogs result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetPeerSettings()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLPeerSettings result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetPinnedDialogs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesPeerDialogs result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetRecentLocations()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetRecentStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesRecentStickers result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetSavedGifs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesSavedGifs result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetStickerSet()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesStickerSet result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetUnreadMentions()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetWebPage()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLWebPage result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runGetWebPagePreview()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessageMedia result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runHideReportSpam()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runImportChatInvite()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runInstallStickerSet()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesStickerSetInstallResult result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runMigrateChat()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReadEncryptedHistory()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReadFeaturedStickers()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReadHistory()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAffectedMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReadMentions()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAffectedHistory result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReadMessageContents()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesAffectedMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReceivedMessages()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLVector<TLReceivedNotifyMessage> result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReceivedQueue()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLVector<quint64> result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReorderPinnedDialogs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReorderStickerSets()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReportEncryptedSpam()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runReportSpam()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runRequestEncryption()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLEncryptedChat result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSaveDraft()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSaveGif()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSaveRecentSticker()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSearch()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSearchGifs()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesFoundGifs result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSearchGlobal()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesMessages result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendEncrypted()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesSentEncryptedMessage result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendEncryptedFile()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesSentEncryptedMessage result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendEncryptedService()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessagesSentEncryptedMessage result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendInlineBotResult()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendMedia()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendMessage()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSendScreenshotNotification()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetBotCallbackAnswer()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetBotPrecheckoutResults()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetBotShippingResults()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetEncryptedTyping()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetGameScore()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetInlineBotResults()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetInlineGameScore()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runSetTyping()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runStartBot()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runToggleChatAdmins()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLUpdates result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runToggleDialogPin()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runUninstallStickerSet()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    bool result;
    sendRpcReply(result);
}

void MessagesRpcOperation::runUploadMedia()
{
    qWarning() << Q_FUNC_INFO << "The method is not implemented!";
    TLMessageMedia result;
    sendRpcReply(result);
}
// End of generated run methods

void MessagesRpcOperation::setRunMethod(MessagesRpcOperation::RunMethod method)
{
    m_runMethod = method;
}

MessagesRpcOperation::ProcessingMethod MessagesRpcOperation::getMethodForRpcFunction(TLValue function)
{
    switch (function) {
    // Generated methodForRpcFunction cases
    case TLValue::MessagesAcceptEncryption:
        return &MessagesRpcOperation::processAcceptEncryption;
    case TLValue::MessagesAddChatUser:
        return &MessagesRpcOperation::processAddChatUser;
    case TLValue::MessagesCheckChatInvite:
        return &MessagesRpcOperation::processCheckChatInvite;
    case TLValue::MessagesClearRecentStickers:
        return &MessagesRpcOperation::processClearRecentStickers;
    case TLValue::MessagesCreateChat:
        return &MessagesRpcOperation::processCreateChat;
    case TLValue::MessagesDeleteChatUser:
        return &MessagesRpcOperation::processDeleteChatUser;
    case TLValue::MessagesDeleteHistory:
        return &MessagesRpcOperation::processDeleteHistory;
    case TLValue::MessagesDeleteMessages:
        return &MessagesRpcOperation::processDeleteMessages;
    case TLValue::MessagesDiscardEncryption:
        return &MessagesRpcOperation::processDiscardEncryption;
    case TLValue::MessagesEditChatAdmin:
        return &MessagesRpcOperation::processEditChatAdmin;
    case TLValue::MessagesEditChatPhoto:
        return &MessagesRpcOperation::processEditChatPhoto;
    case TLValue::MessagesEditChatTitle:
        return &MessagesRpcOperation::processEditChatTitle;
    case TLValue::MessagesEditInlineBotMessage:
        return &MessagesRpcOperation::processEditInlineBotMessage;
    case TLValue::MessagesEditMessage:
        return &MessagesRpcOperation::processEditMessage;
    case TLValue::MessagesExportChatInvite:
        return &MessagesRpcOperation::processExportChatInvite;
    case TLValue::MessagesFaveSticker:
        return &MessagesRpcOperation::processFaveSticker;
    case TLValue::MessagesForwardMessage:
        return &MessagesRpcOperation::processForwardMessage;
    case TLValue::MessagesForwardMessages:
        return &MessagesRpcOperation::processForwardMessages;
    case TLValue::MessagesGetAllChats:
        return &MessagesRpcOperation::processGetAllChats;
    case TLValue::MessagesGetAllDrafts:
        return &MessagesRpcOperation::processGetAllDrafts;
    case TLValue::MessagesGetAllStickers:
        return &MessagesRpcOperation::processGetAllStickers;
    case TLValue::MessagesGetArchivedStickers:
        return &MessagesRpcOperation::processGetArchivedStickers;
    case TLValue::MessagesGetAttachedStickers:
        return &MessagesRpcOperation::processGetAttachedStickers;
    case TLValue::MessagesGetBotCallbackAnswer:
        return &MessagesRpcOperation::processGetBotCallbackAnswer;
    case TLValue::MessagesGetChats:
        return &MessagesRpcOperation::processGetChats;
    case TLValue::MessagesGetCommonChats:
        return &MessagesRpcOperation::processGetCommonChats;
    case TLValue::MessagesGetDhConfig:
        return &MessagesRpcOperation::processGetDhConfig;
    case TLValue::MessagesGetDialogs:
        return &MessagesRpcOperation::processGetDialogs;
    case TLValue::MessagesGetDocumentByHash:
        return &MessagesRpcOperation::processGetDocumentByHash;
    case TLValue::MessagesGetFavedStickers:
        return &MessagesRpcOperation::processGetFavedStickers;
    case TLValue::MessagesGetFeaturedStickers:
        return &MessagesRpcOperation::processGetFeaturedStickers;
    case TLValue::MessagesGetFullChat:
        return &MessagesRpcOperation::processGetFullChat;
    case TLValue::MessagesGetGameHighScores:
        return &MessagesRpcOperation::processGetGameHighScores;
    case TLValue::MessagesGetHistory:
        return &MessagesRpcOperation::processGetHistory;
    case TLValue::MessagesGetInlineBotResults:
        return &MessagesRpcOperation::processGetInlineBotResults;
    case TLValue::MessagesGetInlineGameHighScores:
        return &MessagesRpcOperation::processGetInlineGameHighScores;
    case TLValue::MessagesGetMaskStickers:
        return &MessagesRpcOperation::processGetMaskStickers;
    case TLValue::MessagesGetMessageEditData:
        return &MessagesRpcOperation::processGetMessageEditData;
    case TLValue::MessagesGetMessages:
        return &MessagesRpcOperation::processGetMessages;
    case TLValue::MessagesGetMessagesViews:
        return &MessagesRpcOperation::processGetMessagesViews;
    case TLValue::MessagesGetPeerDialogs:
        return &MessagesRpcOperation::processGetPeerDialogs;
    case TLValue::MessagesGetPeerSettings:
        return &MessagesRpcOperation::processGetPeerSettings;
    case TLValue::MessagesGetPinnedDialogs:
        return &MessagesRpcOperation::processGetPinnedDialogs;
    case TLValue::MessagesGetRecentLocations:
        return &MessagesRpcOperation::processGetRecentLocations;
    case TLValue::MessagesGetRecentStickers:
        return &MessagesRpcOperation::processGetRecentStickers;
    case TLValue::MessagesGetSavedGifs:
        return &MessagesRpcOperation::processGetSavedGifs;
    case TLValue::MessagesGetStickerSet:
        return &MessagesRpcOperation::processGetStickerSet;
    case TLValue::MessagesGetUnreadMentions:
        return &MessagesRpcOperation::processGetUnreadMentions;
    case TLValue::MessagesGetWebPage:
        return &MessagesRpcOperation::processGetWebPage;
    case TLValue::MessagesGetWebPagePreview:
        return &MessagesRpcOperation::processGetWebPagePreview;
    case TLValue::MessagesHideReportSpam:
        return &MessagesRpcOperation::processHideReportSpam;
    case TLValue::MessagesImportChatInvite:
        return &MessagesRpcOperation::processImportChatInvite;
    case TLValue::MessagesInstallStickerSet:
        return &MessagesRpcOperation::processInstallStickerSet;
    case TLValue::MessagesMigrateChat:
        return &MessagesRpcOperation::processMigrateChat;
    case TLValue::MessagesReadEncryptedHistory:
        return &MessagesRpcOperation::processReadEncryptedHistory;
    case TLValue::MessagesReadFeaturedStickers:
        return &MessagesRpcOperation::processReadFeaturedStickers;
    case TLValue::MessagesReadHistory:
        return &MessagesRpcOperation::processReadHistory;
    case TLValue::MessagesReadMentions:
        return &MessagesRpcOperation::processReadMentions;
    case TLValue::MessagesReadMessageContents:
        return &MessagesRpcOperation::processReadMessageContents;
    case TLValue::MessagesReceivedMessages:
        return &MessagesRpcOperation::processReceivedMessages;
    case TLValue::MessagesReceivedQueue:
        return &MessagesRpcOperation::processReceivedQueue;
    case TLValue::MessagesReorderPinnedDialogs:
        return &MessagesRpcOperation::processReorderPinnedDialogs;
    case TLValue::MessagesReorderStickerSets:
        return &MessagesRpcOperation::processReorderStickerSets;
    case TLValue::MessagesReportEncryptedSpam:
        return &MessagesRpcOperation::processReportEncryptedSpam;
    case TLValue::MessagesReportSpam:
        return &MessagesRpcOperation::processReportSpam;
    case TLValue::MessagesRequestEncryption:
        return &MessagesRpcOperation::processRequestEncryption;
    case TLValue::MessagesSaveDraft:
        return &MessagesRpcOperation::processSaveDraft;
    case TLValue::MessagesSaveGif:
        return &MessagesRpcOperation::processSaveGif;
    case TLValue::MessagesSaveRecentSticker:
        return &MessagesRpcOperation::processSaveRecentSticker;
    case TLValue::MessagesSearch:
        return &MessagesRpcOperation::processSearch;
    case TLValue::MessagesSearchGifs:
        return &MessagesRpcOperation::processSearchGifs;
    case TLValue::MessagesSearchGlobal:
        return &MessagesRpcOperation::processSearchGlobal;
    case TLValue::MessagesSendEncrypted:
        return &MessagesRpcOperation::processSendEncrypted;
    case TLValue::MessagesSendEncryptedFile:
        return &MessagesRpcOperation::processSendEncryptedFile;
    case TLValue::MessagesSendEncryptedService:
        return &MessagesRpcOperation::processSendEncryptedService;
    case TLValue::MessagesSendInlineBotResult:
        return &MessagesRpcOperation::processSendInlineBotResult;
    case TLValue::MessagesSendMedia:
        return &MessagesRpcOperation::processSendMedia;
    case TLValue::MessagesSendMessage:
        return &MessagesRpcOperation::processSendMessage;
    case TLValue::MessagesSendScreenshotNotification:
        return &MessagesRpcOperation::processSendScreenshotNotification;
    case TLValue::MessagesSetBotCallbackAnswer:
        return &MessagesRpcOperation::processSetBotCallbackAnswer;
    case TLValue::MessagesSetBotPrecheckoutResults:
        return &MessagesRpcOperation::processSetBotPrecheckoutResults;
    case TLValue::MessagesSetBotShippingResults:
        return &MessagesRpcOperation::processSetBotShippingResults;
    case TLValue::MessagesSetEncryptedTyping:
        return &MessagesRpcOperation::processSetEncryptedTyping;
    case TLValue::MessagesSetGameScore:
        return &MessagesRpcOperation::processSetGameScore;
    case TLValue::MessagesSetInlineBotResults:
        return &MessagesRpcOperation::processSetInlineBotResults;
    case TLValue::MessagesSetInlineGameScore:
        return &MessagesRpcOperation::processSetInlineGameScore;
    case TLValue::MessagesSetTyping:
        return &MessagesRpcOperation::processSetTyping;
    case TLValue::MessagesStartBot:
        return &MessagesRpcOperation::processStartBot;
    case TLValue::MessagesToggleChatAdmins:
        return &MessagesRpcOperation::processToggleChatAdmins;
    case TLValue::MessagesToggleDialogPin:
        return &MessagesRpcOperation::processToggleDialogPin;
    case TLValue::MessagesUninstallStickerSet:
        return &MessagesRpcOperation::processUninstallStickerSet;
    case TLValue::MessagesUploadMedia:
        return &MessagesRpcOperation::processUploadMedia;
    // End of generated methodForRpcFunction cases
    default:
        return nullptr;
    }
}

RpcOperation *MessagesOperationFactory::processRpcCall(RpcLayer *layer, RpcProcessingContext &context)
{
    return processRpcCallImpl<MessagesRpcOperation>(layer, context);
}

} // Server

} // Telegram