//
//  MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener.h
// 
//  Bridges to the java interface com.mopub.mraid.MraidBridge.MraidWebView.OnVisibilityChangedListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidWebView.OnVisibilityChangedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mraid.MraidBridge$MraidWebView$OnVisibilityChangedListener")
@protocol MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener 

// properties


// methods
- (void)onVisibilityChanged:(BOOL)isVisible; /* onVisibilityChanged */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mraid.MraidBridge$MraidWebView$OnVisibilityChangedListener")
@interface MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener : JavaObject <MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener>

//properties for handlers
@property (nonatomic, copy) void (^onVisibilityChangedHandler)(BOOL);


//convenience class method
+ (MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener *)listenerWithBlock:(void (^)(BOOL))onVisibilityChangedHandler;

@end