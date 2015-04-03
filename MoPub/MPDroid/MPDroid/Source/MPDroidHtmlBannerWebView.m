//
//  MPDroidHtmlBannerWebView.m
// 
//  Bridges to the java object com.mopub.mobileads.HtmlBannerWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlBannerWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHtmlBannerWebView.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidCustomEventBannerCustomEventBannerListener.h>


@implementation MPDroidHtmlBannerWebView


//constructors
@bridge (constructor) initWithContext:adReport:;


//properties


//methods
@bridge (method, instance) initializeWithCustomEventBannerListener:isScrollable:redirectUrl:clickthroughUrl: = init;


@end
