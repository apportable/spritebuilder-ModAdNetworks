//
//  MPDroidHtmlInterstitial.h
// 
//  Bridges to the java object com.mopub.mobileads.HtmlInterstitial
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlInterstitial.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidResponseBodyInterstitial.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHtmlInterstitial
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.HtmlInterstitial")
@interface MPDroidHtmlInterstitial : MPDroidResponseBodyInterstitial 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)showInterstitial; /* showInterstitial */


@end
