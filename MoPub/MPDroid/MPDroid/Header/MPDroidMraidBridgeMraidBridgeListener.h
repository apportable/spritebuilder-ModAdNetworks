//
//  MPDroidMraidBridgeMraidBridgeListener.h
// 
//  Bridges to the java interface com.mopub.mraid.MraidBridge.MraidBridgeListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidBridgeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidJsResult;
@class JavaURI;
@class MPDroidCloseableLayoutClosePosition;
@class AndroidConsoleMessage;


//static fields


/**
Java interface: MPDroidMraidBridgeMraidBridgeListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mraid.MraidBridge$MraidBridgeListener")
@protocol MPDroidMraidBridgeMraidBridgeListener 

// properties


// methods
- (void)onPageLoaded; /* onPageLoaded */
- (void)onPageFailedToLoad; /* onPageFailedToLoad */
- (void)onVisibilityChanged:(BOOL)isVisible; /* onVisibilityChanged */
- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result; /* onJsAlert */
- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage; /* onConsoleMessage */
- (void)onResize:(int32_t)width height:(int32_t)height offsetX:(int32_t)offsetX offsetY:(int32_t)offsetY closePosition:(MPDroidCloseableLayoutClosePosition *)closePosition allowOffscreen:(BOOL)allowOffscreen; /* onResize */
- (void)onExpand:(JavaURI *)uri shouldUseCustomClose:(BOOL)shouldUseCustomClose; /* onExpand */
- (void)onClose; /* onClose */
- (void)onUseCustomClose:(BOOL)shouldUseCustomClose; /* onUseCustomClose */
- (void)onOpen:(JavaURI *)uri; /* onOpen */
- (void)onPlayVideo:(JavaURI *)uri; /* onPlayVideo */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mraid.MraidBridge$MraidBridgeListener")
@interface MPDroidMraidBridgeMraidBridgeListener : JavaObject <MPDroidMraidBridgeMraidBridgeListener>

//properties for handlers
@property (nonatomic, copy) void (^onPageLoadedHandler)();
@property (nonatomic, copy) void (^onPageFailedToLoadHandler)();
@property (nonatomic, copy) void (^onVisibilityChangedHandler)(BOOL);
@property (nonatomic, copy) BOOL (^onJsAlertJsResultHandler)(NSString *, AndroidJsResult *);
@property (nonatomic, copy) BOOL (^onConsoleMessageHandler)(AndroidConsoleMessage *);
@property (nonatomic, copy) void (^onResizeHeightOffsetXOffsetYClosePositionAllowOffscreenHandler)(int32_t, int32_t, int32_t, int32_t, MPDroidCloseableLayoutClosePosition *, BOOL);
@property (nonatomic, copy) void (^onExpandShouldUseCustomCloseHandler)(JavaURI *, BOOL);
@property (nonatomic, copy) void (^onCloseHandler)();
@property (nonatomic, copy) void (^onUseCustomCloseHandler)(BOOL);
@property (nonatomic, copy) void (^onOpenHandler)(JavaURI *);
@property (nonatomic, copy) void (^onPlayVideoHandler)(JavaURI *);


//convenience class method
+ (MPDroidMraidBridgeMraidBridgeListener *)listener;

@end