//
//  MPDroidMoPubNativeMoPubNativeEventListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeEventListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeEventListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;


//static fields


/**
Java interface: MPDroidMoPubNativeMoPubNativeEventListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeEventListener")
@protocol MPDroidMoPubNativeMoPubNativeEventListener 

// properties


// methods
- (void)onNativeImpression:(AndroidView *)view; /* onNativeImpression */
- (void)onNativeClick:(AndroidView *)view; /* onNativeClick */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeEventListener")
@interface MPDroidMoPubNativeMoPubNativeEventListener : JavaObject <MPDroidMoPubNativeMoPubNativeEventListener>

//properties for handlers
@property (nonatomic, copy) void (^onNativeImpressionHandler)(AndroidView *);
@property (nonatomic, copy) void (^onNativeClickHandler)(AndroidView *);


//convenience class method
+ (MPDroidMoPubNativeMoPubNativeEventListener *)listener;

@end