//
//  MPDroidMoPubInterstitial.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubInterstitial
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubInterstitial.h>
//other required types
#import <MPDroid/MPDroidMoPubInterstitialInterstitialAdListener.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubInterstitialMoPubInterstitialView.h>
#import <MPDroid/MPDroidMoPubInterstitialMoPubInterstitialListener.h>
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaInteger.h>
#import <AndroidKit/AndroidActivity.h>
#import <MPDroid/MPDroidLocationServiceLocationAwareness.h>
#import <AndroidKit/AndroidLocation.h>
#import <MPDroid/MPDroidCustomEventInterstitialAdapter.h>


@implementation MPDroidMoPubInterstitial


//constructors
@bridge (constructor) initWithActivity:identifier:;


//properties
@bridge (instance, method) isReady = isReady;

@bridge (instance, method) location = getLocation;

@bridge (instance, method) keywords = getKeywords;
@bridge (instance, method) setKeywords: = setKeywords;
@bridge (instance, method) show = show;

@bridge (instance, method) localExtras = getLocalExtras;
@bridge (instance, method) setLocalExtras: = setLocalExtras;
@bridge (instance, method) activity = getActivity;

@bridge (instance, method) interstitialAdListener = getInterstitialAdListener;
@bridge (instance, method) setInterstitialAdListener: = setInterstitialAdListener;
@bridge (instance, method) testing = getTesting;
@bridge (instance, method) setTesting: = setTesting;


//methods
@bridge (method, instance) load = load;
@bridge (method, instance) forceRefresh = forceRefresh;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) onCustomEventInterstitialLoaded = onCustomEventInterstitialLoaded;
@bridge (method, instance) onCustomEventInterstitialFailed: = onCustomEventInterstitialFailed;
@bridge (method, instance) onCustomEventInterstitialShown = onCustomEventInterstitialShown;
@bridge (method, instance) onCustomEventInterstitialClicked = onCustomEventInterstitialClicked;
@bridge (method, instance) onCustomEventInterstitialDismissed = onCustomEventInterstitialDismissed;


@end
