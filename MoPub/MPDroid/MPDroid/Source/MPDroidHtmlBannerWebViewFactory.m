//
//  MPDroidHtmlBannerWebViewFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.HtmlBannerWebViewFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HtmlBannerWebViewFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHtmlBannerWebViewFactory.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidHtmlBannerWebView.h>
#import <MPDroid/MPDroidCustomEventBannerCustomEventBannerListener.h>


@implementation MPDroidHtmlBannerWebViewFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithContext:adReport:customEventBannerListener:isScrollable:redirectUrl:clickthroughUrl: = create;
@bridge (method, instance) internalCreate:adReport:customEventBannerListener:isScrollable:redirectUrl:clickthroughUrl: = internalCreate;


@end
