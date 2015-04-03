//
//  MPDroidHtmlInterstitialWebViewFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.HtmlInterstitialWebViewFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HtmlInterstitialWebViewFactory.html for documentation.
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
@class MPDroidHtmlInterstitialWebView;
@class AndroidContext;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHtmlInterstitialWebViewFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.HtmlInterstitialWebViewFactory")
@interface MPDroidHtmlInterstitialWebViewFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidHtmlInterstitialWebView *)createWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport customEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* create */
- (MPDroidHtmlInterstitialWebView *)internalCreate:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport customEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* internalCreate */


@end
