//
//  MPDroidMoPubView.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubView
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubView.h>
//other required types
#import <MPDroid/MPDroidMoPubViewBannerAdListener.h>
#import <MPDroid/MPDroidMoPubViewOnAdFailedListener.h>
#import <AndroidKit/AndroidBroadcastReceiver.h>
#import <MPDroid/MPDroidAdViewController.h>
#import <MPDroid/MPDroidCustomEventBannerAdapter.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidLocation.h>
#import <AndroidKit/AndroidAttributeSet.h>
#import <MPDroid/MPDroidMoPubViewOnAdClosedListener.h>
#import <MPDroid/MPDroidMoPubViewOnAdLoadedListener.h>
#import <MPDroid/MPDroidMoPubViewOnAdWillLoadListener.h>
#import <AndroidKit/AndroidActivity.h>
#import <MPDroid/MPDroidMoPubViewOnAdPresentedOverlayListener.h>
#import <JavaKit/JavaMap.h>
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidAdFormat.h>
#import <JavaKit/JavaInteger.h>
#import <MPDroid/MPDroidLocationServiceLocationAwareness.h>
#import <MPDroid/MPDroidMoPubViewOnAdClickedListener.h>


@implementation MPDroidMoPubView


//constructors
@bridge (constructor) initWithContext:;
@bridge (constructor) initWithContext:attributeSet:;


//properties
@bridge (instance, method) bannerAdListener = getBannerAdListener;
@bridge (instance, method) setBannerAdListener: = setBannerAdListener;
@bridge (instance, method) autorefreshEnabled = getAutorefreshEnabled;
@bridge (instance, method) setAutorefreshEnabled: = setAutorefreshEnabled;
@bridge (instance, method) adWidth = getAdWidth;

@bridge (instance, method) adUnitId = getAdUnitId;
@bridge (instance, method) setAdUnitId: = setAdUnitId;
@bridge (instance, method) localExtras = getLocalExtras;
@bridge (instance, method) setLocalExtras: = setLocalExtras;
@bridge (instance, method) responseString = getResponseString;

@bridge (instance, method) location = getLocation;
@bridge (instance, method) setLocation: = setLocation;
@bridge (instance, method) clickTrackingUrl = getClickTrackingUrl;

@bridge (instance, method) keywords = getKeywords;
@bridge (instance, method) setKeywords: = setKeywords;
@bridge (instance, method) activity = getActivity;

@bridge (instance, method) testing = getTesting;
@bridge (instance, method) setTesting: = setTesting;
@bridge (instance, method) adFormat = getAdFormat;

@bridge (instance, method) adHeight = getAdHeight;



//methods
@bridge (method, instance) loadAd = loadAd;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) setTimeout: = setTimeout;
@bridge (method, instance) setAdContentView: = setAdContentView;
@bridge (method, instance) forceRefresh = forceRefresh;


@end
