//
//  MPDroidAdTypeTranslator.h
// 
//  Bridges to the java object com.mopub.mobileads.AdTypeTranslator
//  See http://developer.android.com/reference/com/mopub/mobileads/AdTypeTranslator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdFormat;
@protocol JavaMap;


//defines and their comments (static fields with values)
#define MPDroidAdTypeTranslatorBannerSuffix @"_banner"
#define MPDroidAdTypeTranslatorInterstitialSuffix @"_interstitial"

/**
Java class: MPDroidAdTypeTranslator
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.AdTypeTranslator")
@interface MPDroidAdTypeTranslator : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (NSString *)customEventNameForAdFormat:(MPDroidAdFormat *)adFormat adType:(NSString *)adType fullAdType:(NSString *)fullAdType map:(JavaObject <JavaMap> *)headers; /* getCustomEventName */


@end
