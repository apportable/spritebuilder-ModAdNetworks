//
//  MPDroidGpsHelper.h
// 
//  Bridges to the java object com.mopub.common.GpsHelper
//  See http://developer.android.com/reference/com/mopub/common/GpsHelper.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidGpsHelperAdvertisingInfo;
@protocol MPDroidGpsHelperGpsHelperListener;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidGpsHelperGooglePlaySuccessCode 0
#define MPDroidGpsHelperAdvertisingIdKey @"advertisingId"
#define MPDroidGpsHelperIsLimitAdTrackingEnabledKey @"isLimitAdTrackingEnabled"

/**
Java class: MPDroidGpsHelper
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.GpsHelper")
@interface MPDroidGpsHelper : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (BOOL)isPlayServicesAvailable:(AndroidContext *)context; /* isPlayServicesAvailable */
+ (BOOL)isLimitAdTrackingEnabled:(AndroidContext *)context; /* isLimitAdTrackingEnabled */
+ (void)fetchAdvertisingInfoAsync:(AndroidContext *)context gpsHelperListener:(JavaObject <MPDroidGpsHelperGpsHelperListener> *)gpsHelperListener; /* fetchAdvertisingInfoAsync */
+ (MPDroidGpsHelperAdvertisingInfo *)fetchAdvertisingInfoSync:(AndroidContext *)context; /* fetchAdvertisingInfoSync */


@end
