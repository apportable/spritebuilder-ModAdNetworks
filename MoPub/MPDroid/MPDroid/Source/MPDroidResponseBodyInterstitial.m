//
//  MPDroidResponseBodyInterstitial.m
// 
//  Bridges to the java object com.mopub.mobileads.ResponseBodyInterstitial
//  See http://developer.android.com/reference/com/mopub/mobileads/ResponseBodyInterstitial.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidResponseBodyInterstitial.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>
#import <JavaKit/JavaMap.h>
#import <MPDroid/MPDroidEventForwardingBroadcastReceiver.h>


@implementation MPDroidResponseBodyInterstitial


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) showInterstitial = showInterstitial;
@bridge (method, instance) loadInterstitial:customEventInterstitialListener:map:map: = loadInterstitial;
@bridge (method, instance) onInvalidate = onInvalidate;


@end
