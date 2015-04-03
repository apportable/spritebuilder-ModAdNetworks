//
//  MPDroidAdTypeTranslatorCustomEventType.h
// 
//  Bridges to the java object com.mopub.mobileads.AdTypeTranslator.CustomEventType
//  See http://developer.android.com/reference/com/mopub/mobileads/AdTypeTranslator.CustomEventType.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdTypeTranslatorCustomEventType
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.AdTypeTranslator$CustomEventType")
@interface MPDroidAdTypeTranslatorCustomEventType : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidAdTypeTranslatorCustomEventType *)googlePlayServicesBanner;
+ (MPDroidAdTypeTranslatorCustomEventType *)googlePlayServicesInterstitial;
+ (MPDroidAdTypeTranslatorCustomEventType *)millennialBanner;
+ (MPDroidAdTypeTranslatorCustomEventType *)millennialInterstitial;
+ (MPDroidAdTypeTranslatorCustomEventType *)mraidBanner;
+ (MPDroidAdTypeTranslatorCustomEventType *)mraidInterstitial;
+ (MPDroidAdTypeTranslatorCustomEventType *)htmlBanner;
+ (MPDroidAdTypeTranslatorCustomEventType *)htmlInterstitial;
+ (MPDroidAdTypeTranslatorCustomEventType *)vastVideoInterstitial;
+ (MPDroidAdTypeTranslatorCustomEventType *)mopubNative;
+ (MPDroidAdTypeTranslatorCustomEventType *)unspecified;

// methods
- (NSString *)description; /* toString */


@end
