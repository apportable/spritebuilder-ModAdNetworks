//
//  MPDroidHtmlInterstitialWebViewFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.HtmlInterstitialWebViewFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HtmlInterstitialWebViewFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHtmlInterstitialWebViewFactory.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidHtmlInterstitialWebView.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>


@implementation MPDroidHtmlInterstitialWebViewFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithContext:adReport:customEventInterstitialListener:isScrollable:redirectUrl:clickthroughUrl: = create;
@bridge (method, instance) internalCreate:adReport:customEventInterstitialListener:isScrollable:redirectUrl:clickthroughUrl: = internalCreate;


@end
