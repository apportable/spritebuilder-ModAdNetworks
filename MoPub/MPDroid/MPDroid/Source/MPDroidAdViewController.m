//
//  MPDroidAdViewController.m
// 
//  Bridges to the java object com.mopub.mobileads.AdViewController
//  See http://developer.android.com/reference/com/mopub/mobileads/AdViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdViewController.h>
//other required types
#import <MPDroid/MPDroidAdResponse.h>
#import <JavaKit/JavaWeakHashMap.h>
#import <MPDroid/MPDroidMoPubView.h>
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidAdRequest.h>
#import <AndroidKit/AndroidHandler.h>
#import <JavaKit/JavaRunnable.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <AndroidKit/AndroidFrameLayoutLayoutParams.h>
#import <AndroidKit/AndroidLocation.h>
#import <MPDroid/MPDroidAdRequestListener.h>
#import <MPDroid/MPDroidWebViewAdUrlGenerator.h>
#import <JavaKit/JavaMap.h>
#import <AndroidKit/AndroidView.h>
#import <JavaKit/JavaInteger.h>


@implementation MPDroidAdViewController


//constructors
@bridge (constructor) initWithContext:moPubView:;


//properties
@bridge (instance, method) location = getLocation;
@bridge (instance, method) setLocation: = setLocation;
@bridge (instance, method) adWidth = getAdWidth;

@bridge (instance, method) testing = getTesting;
@bridge (instance, method) setTesting: = setTesting;
@bridge (instance, method) moPubView = getMoPubView;

@bridge (instance, method) keywords = getKeywords;
@bridge (instance, method) setKeywords: = setKeywords;
@bridge (instance, method) adHeight = getAdHeight;

@bridge (instance, method) broadcastIdentifier = getBroadcastIdentifier;

@bridge (instance, method) adReport = getAdReport;

@bridge (instance, method) autorefreshEnabled = getAutorefreshEnabled;

@bridge (instance, method) adUnitId = getAdUnitId;
@bridge (instance, method) setAdUnitId: = setAdUnitId;


//methods
@bridge (method, static) setShouldHonorServerDimensionsByView: = setShouldHonorServerDimensions;
@bridge (method, instance) loadAd = loadAd;
@bridge (method, instance) reload = reload;
@bridge (method, instance) setTimeout: = setTimeout;


@end
