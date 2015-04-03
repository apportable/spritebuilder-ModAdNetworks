//
//  MPDroidHtmlBannerWebViewFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.HtmlBannerWebViewFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HtmlBannerWebViewFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class AndroidContext;
@class MPDroidHtmlBannerWebView;
@protocol MPDroidCustomEventBannerCustomEventBannerListener;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHtmlBannerWebViewFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.HtmlBannerWebViewFactory")
@interface MPDroidHtmlBannerWebViewFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidHtmlBannerWebView *)createWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport customEventBannerListener:(JavaObject <MPDroidCustomEventBannerCustomEventBannerListener> *)customEventBannerListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* create */
- (MPDroidHtmlBannerWebView *)internalCreate:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport customEventBannerListener:(JavaObject <MPDroidCustomEventBannerCustomEventBannerListener> *)customEventBannerListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* internalCreate */


@end
