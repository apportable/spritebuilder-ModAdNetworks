//
//  MPDroidCustomEventInterstitialFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventInterstitialFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventInterstitialFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidCustomEventInterstitial;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCustomEventInterstitialFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.CustomEventInterstitialFactory")
@interface MPDroidCustomEventInterstitialFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCustomEventInterstitial *)createWithClassName:(NSString *)className; /* create */


@end
