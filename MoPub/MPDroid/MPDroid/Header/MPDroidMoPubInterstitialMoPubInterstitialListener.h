//
//  MPDroidMoPubInterstitialMoPubInterstitialListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubInterstitial.MoPubInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.MoPubInterstitialListener.html for documentation.
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
Java interface: MPDroidMoPubInterstitialMoPubInterstitialListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubInterstitial$MoPubInterstitialListener")
@protocol MPDroidMoPubInterstitialMoPubInterstitialListener 

// properties


// methods
- (void)OnInterstitialLoaded; /* OnInterstitialLoaded */
- (void)OnInterstitialFailed; /* OnInterstitialFailed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubInterstitial$MoPubInterstitialListener")
@interface MPDroidMoPubInterstitialMoPubInterstitialListener : JavaObject <MPDroidMoPubInterstitialMoPubInterstitialListener>

//properties for handlers
@property (nonatomic, copy) void (^OnInterstitialLoadedHandler)();
@property (nonatomic, copy) void (^OnInterstitialFailedHandler)();


//convenience class method
+ (MPDroidMoPubInterstitialMoPubInterstitialListener *)listener;

@end