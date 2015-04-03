//
//  MPDroidLocationService.m
// 
//  Bridges to the java object com.mopub.common.LocationService
//  See http://developer.android.com/reference/com/mopub/common/LocationService.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidLocationService.h>
//other required types
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidMoPubLocationAwareness.h>
#import <AndroidKit/AndroidLocation.h>


@implementation MPDroidLocationService


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) lastKnownLocationForContext:locationPrecision:locationAwareness: = getLastKnownLocation;


@end
