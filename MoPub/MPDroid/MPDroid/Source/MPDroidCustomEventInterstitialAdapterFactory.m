//
//  MPDroidCustomEventInterstitialAdapterFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventInterstitialAdapterFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventInterstitialAdapterFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventInterstitialAdapterFactory.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidMoPubInterstitial.h>
#import <MPDroid/MPDroidCustomEventInterstitialAdapter.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidCustomEventInterstitialAdapterFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithMoPubInterstitial:className:map:broadcastIdentifier:adReport: = create;


@end
