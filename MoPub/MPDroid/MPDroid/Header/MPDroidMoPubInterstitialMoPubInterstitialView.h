//
//  MPDroidMoPubInterstitialMoPubInterstitialView.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubInterstitial.MoPubInterstitialView
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.MoPubInterstitialView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidMoPubView.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubErrorCode;
@class MPDroidAdFormat;
@class MPDroidMoPubInterstitial;
@class AndroidContext;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubInterstitialMoPubInterstitialView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubInterstitial$MoPubInterstitialView")
@interface MPDroidMoPubInterstitialMoPubInterstitialView : MPDroidMoPubView 

// constructors
- (instancetype)initWithMoPubInterstitial:(MPDroidMoPubInterstitial *)this$0 context:(AndroidContext *)context; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidAdFormat *adFormat; /* getAdFormat */


//static valueless fields


// methods


@end
