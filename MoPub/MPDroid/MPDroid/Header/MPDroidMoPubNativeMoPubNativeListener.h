//
//  MPDroidMoPubNativeMoPubNativeListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols
#import <MPDroid/MPDroidMoPubNativeMoPubNativeNetworkListener.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeEventListener.h>


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidMoPubNativeMoPubNativeListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeListener")
@protocol MPDroidMoPubNativeMoPubNativeListener <MPDroidMoPubNativeMoPubNativeNetworkListener, MPDroidMoPubNativeMoPubNativeEventListener>

// properties


// methods



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.MoPubNative$MoPubNativeListener")
@interface MPDroidMoPubNativeMoPubNativeListener : JavaObject <MPDroidMoPubNativeMoPubNativeListener>

//properties for handlers


//convenience class method


@end