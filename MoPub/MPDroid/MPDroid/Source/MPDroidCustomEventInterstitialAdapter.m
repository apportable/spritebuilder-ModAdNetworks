//
//  MPDroidCustomEventInterstitialAdapter.m
// 
//  Bridges to the java object com.mopub.mobileads.CustomEventInterstitialAdapter
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventInterstitialAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventInterstitialAdapter.h>
//other required types
#import <MPDroid/MPDroidCustomEventInterstitial.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <JavaKit/JavaMap.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidMoPubInterstitial.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidAdReport.h>


@implementation MPDroidCustomEventInterstitialAdapter


//constructors
@bridge (constructor) initWithMoPubInterstitial:className:map:broadcastIdentifier:adReport:;


//properties


//methods
@bridge (method, instance) onInterstitialLoaded = onInterstitialLoaded;
@bridge (method, instance) onInterstitialFailed: = onInterstitialFailed;
@bridge (method, instance) onInterstitialShown = onInterstitialShown;
@bridge (method, instance) onInterstitialClicked = onInterstitialClicked;
@bridge (method, instance) onLeaveApplication = onLeaveApplication;
@bridge (method, instance) onInterstitialDismissed = onInterstitialDismissed;


@end
