//
//  MPDroidResponseBodyInterstitial.h
// 
//  Bridges to the java object com.mopub.mobileads.ResponseBodyInterstitial
//  See http://developer.android.com/reference/com/mopub/mobileads/ResponseBodyInterstitial.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidCustomEventInterstitial.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class AndroidContext;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;
@protocol JavaMap;
@class MPDroidEventForwardingBroadcastReceiver;


//defines and their comments (static fields with values)


/**
Java class: MPDroidResponseBodyInterstitial
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.ResponseBodyInterstitial")
@interface MPDroidResponseBodyInterstitial : MPDroidCustomEventInterstitial 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)showInterstitial; /* showInterstitial */
- (void)loadInterstitial:(AndroidContext *)context customEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener map:(JavaObject <JavaMap> *)localExtras map:(JavaObject <JavaMap> *)serverExtras; /* loadInterstitial */
- (void)onInvalidate; /* onInvalidate */


@end
