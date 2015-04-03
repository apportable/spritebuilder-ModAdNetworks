//
//  MPDroidAdUrlGenerator.m
// 
//  Bridges to the java object com.mopub.common.AdUrlGenerator
//  See http://developer.android.com/reference/com/mopub/common/AdUrlGenerator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdUrlGenerator.h>
//other required types
#import <MPDroid/MPDroidClientMetadataMoPubNetworkType.h>
#import <AndroidKit/AndroidLocation.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidAdUrlGenerator


//constructors
@bridge (constructor) initWithContext:;


//properties


//methods
@bridge (method, instance) withAdUnitId: = withAdUnitId;
@bridge (method, instance) withKeywords: = withKeywords;
@bridge (method, instance) withLocation: = withLocation;


@end
