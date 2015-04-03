//
//  MPDroidBlockMraidBridgeMraidBridgeListener.h
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidBridge.MraidBridgeListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidBridgeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidBridgeMraidBridgeListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMraidBridgeMraidBridgeListener")
@interface MPDroidBlockMraidBridgeMraidBridgeListener : MPDroidMraidBridgeMraidBridgeListener

//methods
- (void)onPageLoaded;
- (void)onPageFailedToLoad;
- (void)onVisibilityChanged:(BOOL)isVisible;
- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result;
- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage;
- (void)onResize:(int32_t)width height:(int32_t)height offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY closePosition:(MPDroidCloseableLayoutClosePosition *)closePosition allowOffscreen:(BOOL)allowOffscreen;
- (void)onExpand:(JavaURI *)uri shouldUseCustomClose:(BOOL)shouldUseCustomClose;
- (void)onClose;
- (void)onUseCustomClose:(BOOL)shouldUseCustomClose;
- (void)onOpen:(JavaURI *)uri;
- (void)onPlayVideo:(JavaURI *)uri;


@end
