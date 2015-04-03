//
//  MPDroidMraidBridgeMraidBridgeListener.m
// 
//  An adapter to the java interface com.mopub.mraid.MraidBridge.MraidBridgeListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidBridgeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMraidBridgeMraidBridgeListener.h>
//other required types
#import <AndroidKit/AndroidJsResult.h>
#import <JavaKit/JavaURI.h>
#import <MPDroid/MPDroidCloseableLayoutClosePosition.h>
#import <AndroidKit/AndroidConsoleMessage.h>
#import "block/include/MPDroidBlockMraidBridgeMraidBridgeListener.h"


@implementation MPDroidMraidBridgeMraidBridgeListener

//properties
@bridge (method, instance) onClose = onClose;
@bridge (method, instance) onConsoleMessage: = onConsoleMessage;
@bridge (method, instance) onExpand:shouldUseCustomClose: = onExpand;
@bridge (method, instance) onJsAlert:jsResult: = onJsAlert;
@bridge (method, instance) onOpen: = onOpen;
@bridge (method, instance) onPageFailedToLoad = onPageFailedToLoad;
@bridge (method, instance) onPageLoaded = onPageLoaded;
@bridge (method, instance) onPlayVideo: = onPlayVideo;
@bridge (method, instance) onResize:height:offsetX:offsetY:closePosition:allowOffscreen: = onResize;
@bridge (method, instance) onUseCustomClose: = onUseCustomClose;
@bridge (method, instance) onVisibilityChanged: = onVisibilityChanged;


//methods


//convenience class method
+ (MPDroidMraidBridgeMraidBridgeListener *)listener
{
    return [[[MPDroidBlockMraidBridgeMraidBridgeListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onPageLoadedHandler != nil)
    {
        Block_release(_onPageLoadedHandler);
        _onPageLoadedHandler = nil;
    }
    if (_onPageFailedToLoadHandler != nil)
    {
        Block_release(_onPageFailedToLoadHandler);
        _onPageFailedToLoadHandler = nil;
    }
    if (_onVisibilityChangedHandler != nil)
    {
        Block_release(_onVisibilityChangedHandler);
        _onVisibilityChangedHandler = nil;
    }
    if (_onJsAlertJsResultHandler != nil)
    {
        Block_release(_onJsAlertJsResultHandler);
        _onJsAlertJsResultHandler = nil;
    }
    if (_onConsoleMessageHandler != nil)
    {
        Block_release(_onConsoleMessageHandler);
        _onConsoleMessageHandler = nil;
    }
    if (_onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler != nil)
    {
        Block_release(_onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler);
        _onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler = nil;
    }
    if (_onExpandShouldUseCustomCloseHandler != nil)
    {
        Block_release(_onExpandShouldUseCustomCloseHandler);
        _onExpandShouldUseCustomCloseHandler = nil;
    }
    if (_onCloseHandler != nil)
    {
        Block_release(_onCloseHandler);
        _onCloseHandler = nil;
    }
    if (_onUseCustomCloseHandler != nil)
    {
        Block_release(_onUseCustomCloseHandler);
        _onUseCustomCloseHandler = nil;
    }
    if (_onOpenHandler != nil)
    {
        Block_release(_onOpenHandler);
        _onOpenHandler = nil;
    }
    if (_onPlayVideoHandler != nil)
    {
        Block_release(_onPlayVideoHandler);
        _onPlayVideoHandler = nil;
    }
    [super dealloc];
}


@end
