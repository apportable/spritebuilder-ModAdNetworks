//
//  MPDroidHtmlInterstitialWebView.h
// 
//  Bridges to the java object com.mopub.mobileads.HtmlInterstitialWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlInterstitialWebView.html for documentation.
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
@class AndroidHandler;
@class AndroidContext;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;
@protocol JavaRunnable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHtmlInterstitialWebView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.HtmlInterstitialWebView")
@interface MPDroidHtmlInterstitialWebView : MPDroidBaseHtmlWebView 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)initializeWithCustomEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl; /* init */


@end
