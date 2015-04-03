//
//  MPDroidGpsHelper.m
// 
//  Bridges to the java object com.mopub.common.GpsHelper
//  See http://developer.android.com/reference/com/mopub/common/GpsHelper.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidGpsHelper.h>
//other required types
#import <MPDroid/MPDroidGpsHelperAdvertisingInfo.h>
#import <MPDroid/MPDroidGpsHelperGpsHelperListener.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidGpsHelper


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) isPlayServicesAvailable: = isPlayServicesAvailable;
@bridge (method, static) isLimitAdTrackingEnabled: = isLimitAdTrackingEnabled;
@bridge (method, static) fetchAdvertisingInfoAsync:gpsHelperListener: = fetchAdvertisingInfoAsync;
@bridge (method, static) fetchAdvertisingInfoSync: = fetchAdvertisingInfoSync;


@end
