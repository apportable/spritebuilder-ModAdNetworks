//
//  MPDroidCustomEventBannerFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventBannerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventBannerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidCustomEventBanner;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCustomEventBannerFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.CustomEventBannerFactory")
@interface MPDroidCustomEventBannerFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCustomEventBanner *)createWithClassName:(NSString *)className; /* create */


@end
