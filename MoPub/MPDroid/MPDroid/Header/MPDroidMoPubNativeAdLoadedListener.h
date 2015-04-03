//
//  MPDroidMoPubNativeAdLoadedListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.MoPubNativeAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdLoadedListener.html for documentation.
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
Java interface: MPDroidMoPubNativeAdLoadedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.MoPubNativeAdLoadedListener")
@protocol MPDroidMoPubNativeAdLoadedListener 

// properties


// methods
- (void)onAdLoaded:(int32_t)position; /* onAdLoaded */
- (void)onAdRemoved:(int32_t)position; /* onAdRemoved */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.MoPubNativeAdLoadedListener")
@interface MPDroidMoPubNativeAdLoadedListener : JavaObject <MPDroidMoPubNativeAdLoadedListener>

//properties for handlers
@property (nonatomic, copy) void (^onAdLoadedHandler)(int32_t);
@property (nonatomic, copy) void (^onAdRemovedHandler)(int32_t);


//convenience class method
+ (MPDroidMoPubNativeAdLoadedListener *)listener;

@end