//
//  MPDroidHtmlInterstitialWebView.m
// 
//  Bridges to the java object com.mopub.mobileads.HtmlInterstitialWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlInterstitialWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHtmlInterstitialWebView.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidHandler.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>


@implementation MPDroidHtmlInterstitialWebView


//constructors
@bridge (constructor) initWithContext:adReport:;


//properties


//methods
@bridge (method, instance) initializeWithCustomEventInterstitialListener:isScrollable:redirectUrl:clickthroughUrl: = init;


@end
