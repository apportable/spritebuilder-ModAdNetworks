//
//  MPDroidMoPubActivity.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubActivity.h>
//other required types
#import <AndroidKit/AndroidBundle.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>
#import <AndroidKit/AndroidView.h>
#import <AndroidKit/AndroidIntent.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidHtmlInterstitialWebView.h>
#import <MPDroid/MPDroidAdReport.h>


@implementation MPDroidMoPubActivity


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) adView = getAdView;



//methods
@bridge (method, static) startWithContext:htmlData:adReport:isScrollable:redirectUrl:clickthroughUrl:broadcastIdentifier: = start;


@end
