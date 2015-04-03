//
//  MPDroidMoPubNativeMoPubNativeNetworkListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeNetworkListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeNetworkListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNativeResponse;
@class MPDroidNativeErrorCode;


//static fields


/**
Java interface: MPDroidMoPubNativeMoPubNativeNetworkListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeNetworkListener")
@protocol MPDroidMoPubNativeMoPubNativeNetworkListener 

// properties


// methods
- (void)onNativeLoad:(MPDroidNativeResponse *)nativeResponse; /* onNativeLoad */
- (void)onNativeFail:(MPDroidNativeErrorCode *)errorCode; /* onNativeFail */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeNetworkListener")
@interface MPDroidMoPubNativeMoPubNativeNetworkListener : JavaObject <MPDroidMoPubNativeMoPubNativeNetworkListener>

//properties for handlers
@property (nonatomic, copy) void (^onNativeLoadHandler)(MPDroidNativeResponse *);
@property (nonatomic, copy) void (^onNativeFailHandler)(MPDroidNativeErrorCode *);


//convenience class method
+ (MPDroidMoPubNativeMoPubNativeNetworkListener *)listener;

@end