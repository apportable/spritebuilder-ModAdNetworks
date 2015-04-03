//
//  MPDroidAdTypeTranslator.m
// 
//  Bridges to the java object com.mopub.mobileads.AdTypeTranslator
//  See http://developer.android.com/reference/com/mopub/mobileads/AdTypeTranslator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdTypeTranslator.h>
//other required types
#import <MPDroid/MPDroidAdFormat.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidAdTypeTranslator


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) customEventNameForAdFormat:adType:fullAdType:map: = getCustomEventName;


@end
