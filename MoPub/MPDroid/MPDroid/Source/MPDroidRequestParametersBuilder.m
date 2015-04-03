//
//  MPDroidRequestParametersBuilder.m
// 
//  Bridges to the java object com.mopub.nativeads.RequestParameters.Builder
//  See http://developer.android.com/reference/com/mopub/nativeads/RequestParameters.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidRequestParametersBuilder.h>
//other required types
#import <MPDroid/MPDroidRequestParameters.h>
#import <AndroidKit/AndroidLocation.h>
#import <JavaKit/JavaEnumSet.h>


@implementation MPDroidRequestParametersBuilder


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) build = build;



//methods
@bridge (method, instance) keywordsWithKeywords: = keywords;
@bridge (method, instance) locationWithLocation: = location;
@bridge (method, instance) desiredAssets: = desiredAssets;


@end
