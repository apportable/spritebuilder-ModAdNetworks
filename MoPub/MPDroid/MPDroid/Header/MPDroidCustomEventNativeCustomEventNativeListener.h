//
//  MPDroidCustomEventNativeCustomEventNativeListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.CustomEventNative.CustomEventNativeListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.CustomEventNativeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNativeErrorCode;


//static fields


/**
Java interface: MPDroidCustomEventNativeCustomEventNativeListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.CustomEventNative$CustomEventNativeListener")
@protocol MPDroidCustomEventNativeCustomEventNativeListener 

// properties


// methods
- (void)onNativeAdFailed:(MPDroidNativeErrorCode *)errorCode; /* onNativeAdFailed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.CustomEventNative$CustomEventNativeListener")
@interface MPDroidCustomEventNativeCustomEventNativeListener : JavaObject <MPDroidCustomEventNativeCustomEventNativeListener>

//properties for handlers
@property (nonatomic, copy) void (^onNativeAdFailedHandler)(MPDroidNativeErrorCode *);


//convenience class method
+ (MPDroidCustomEventNativeCustomEventNativeListener *)listener;

@end