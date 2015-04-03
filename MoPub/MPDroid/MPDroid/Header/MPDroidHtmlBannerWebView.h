//
//  MPDroidHtmlBannerWebView.h
// 
//  Bridges to the java object com.mopub.mobileads.HtmlBannerWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlBannerWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseHtmlWebView.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class AndroidContext;
@protocol MPDroidCustomEventBannerCustomEventBannerListener;


//defines and their comments (static fields with values)
#define MPDroidHtmlBannerWebViewExtraAdClickData @"com.mopub.intent.extra.AD_CLICK_DATA"

/**
Java class: MPDroidHtmlBannerWebView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.HtmlBannerWebView")
@interface MPDroidHtmlBannerWebView : MPDroidBaseHtmlWebView 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)initializeWithCustomEventBannerListener:(JavaObject <MPDroidCustomEventBannerCustomEventBannerListener> *)customEventBannerListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* init */


@end
