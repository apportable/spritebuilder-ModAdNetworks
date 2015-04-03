//
//  MPDroidBlockMraidBridgeMraidBridgeListener.m
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidBridge.MraidBridgeListener
//  See MPDroid/MPDroidBlockMraidBridgeMraidBridgeListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMraidBridgeMraidBridgeListener.h"
//other required types
#import <AndroidKit/AndroidJsResult.h>
#import <JavaKit/JavaURI.h>
#import <MPDroid/MPDroidCloseableLayoutClosePosition.h>
#import <AndroidKit/AndroidConsoleMessage.h>


@implementation MPDroidBlockMraidBridgeMraidBridgeListener

// overrides
- (void)onPageLoaded
{
    if (self.onPageLoadedHandler)
    {
        self.onPageLoadedHandler();
    }
}

- (void)onPageFailedToLoad
{
    if (self.onPageFailedToLoadHandler)
    {
        self.onPageFailedToLoadHandler();
    }
}

- (void)onVisibilityChanged:(BOOL)isVisible
{
    if (self.onVisibilityChangedHandler)
    {
        self.onVisibilityChangedHandler(isVisible);
    }
}

- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result
{
    if (self.onJsAlertJsResultHandler)
    {
        return self.onJsAlertJsResultHandler(message, result);
    }
    return (BOOL)0;
}

- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage
{
    if (self.onConsoleMessageHandler)
    {
        return self.onConsoleMessageHandler(consoleMessage);
    }
    return (BOOL)0;
}

- (void)onResize:(int32_t)width height:(int32_t)height offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY closePosition:(MPDroidCloseableLayoutClosePosition *)closePosition allowOffscreen:(BOOL)allowOffscreen
{
    if (self.onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler)
    {
        self.onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler(width, height, offsetX, offsetY, closePosition, allowOffscreen);
    }
}

- (void)onExpand:(JavaURI *)uri shouldUseCustomClose:(BOOL)shouldUseCustomClose
{
    if (self.onExpandShouldUseCustomCloseHandler)
    {
        self.onExpandShouldUseCustomCloseHandler(uri, shouldUseCustomClose);
    }
}

- (void)onClose
{
    if (self.onCloseHandler)
    {
        self.onCloseHandler();
    }
}

- (void)onUseCustomClose:(BOOL)shouldUseCustomClose
{
    if (self.onUseCustomCloseHandler)
    {
        self.onUseCustomCloseHandler(shouldUseCustomClose);
    }
}

- (void)onOpen:(JavaURI *)uri
{
    if (self.onOpenHandler)
    {
        self.onOpenHandler(uri);
    }
}

- (void)onPlayVideo:(JavaURI *)uri
{
    if (self.onPlayVideoHandler)
    {
        self.onPlayVideoHandler(uri);
    }
}



// bridges
@bridge (callback) onPageLoaded = onPageLoaded;
@bridge (callback) onPageFailedToLoad = onPageFailedToLoad;
@bridge (callback) onVisibilityChanged: = onVisibilityChanged;
@bridge (callback) onJsAlert:jsResult: = onJsAlert;
@bridge (callback) onConsoleMessage: = onConsoleMessage;
@bridge (callback) onResize:height:offsetX:offsetY:closePosition:allowOffscreen: = onResize;
@bridge (callback) onExpand:shouldUseCustomClose: = onExpand;
@bridge (callback) onClose = onClose;
@bridge (callback) onUseCustomClose: = onUseCustomClose;
@bridge (callback) onOpen: = onOpen;
@bridge (callback) onPlayVideo: = onPlayVideo;


@end
