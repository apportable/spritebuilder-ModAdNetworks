//
//  MPDroidDateAndTime.m
// 
//  Bridges to the java object com.mopub.common.util.DateAndTime
//  See http://developer.android.com/reference/com/mopub/common/util/DateAndTime.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDateAndTime.h>
//other required types
#import <JavaKit/JavaTimeZone.h>
#import <JavaKit/JavaDate.h>


@implementation MPDroidDateAndTime


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) internalNow = internalNow;

@bridge (instance, method) internalLocalTimeZone = internalLocalTimeZone;



//methods
@bridge (method, static) localTimeZone = localTimeZone;
@bridge (method, static) now = now;
@bridge (method, static) timeZoneOffsetString = getTimeZoneOffsetString;


@end
