//
//  MPDroidMoPubActivity.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidActivity.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidBundle;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;
@class AndroidView;
@class AndroidIntent;
@class AndroidContext;
@class MPDroidHtmlInterstitialWebView;
@class MPDroidAdReport;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubActivity
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubActivity")
@interface MPDroidMoPubActivity : AndroidActivity 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) AndroidView *adView; /* getAdView */


//static valueless fields


// methods
+ (void)startWithContext:(AndroidContext *)context htmlData:(NSString *)htmlData adReport:(MPDroidAdReport *)adReport isScrollable:(BOOL)isScrollable redirectUrl:(NSString *)redirectUrl clickthroughUrl:(NSString *)clickthroughUrl broadcastIdentifier:(int64_t)broadcastIdentifier; /* start */


@end
