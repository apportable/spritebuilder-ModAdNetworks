//
//  MPDroidGpsHelperAdvertisingInfo.h
// 
//  Bridges to the java object com.mopub.common.GpsHelper.AdvertisingInfo
//  See http://developer.android.com/reference/com/mopub/common/GpsHelper.AdvertisingInfo.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidGpsHelperAdvertisingInfo
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.GpsHelper$AdvertisingInfo")
@interface MPDroidGpsHelperAdvertisingInfo : JavaObject 

// constructors
- (instancetype)initWithAdId:(NSString *)adId limitAdTrackingEnabled:(BOOL)limitAdTrackingEnabled; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSString *advertisingId; /* advertisingId */
@property (nonatomic, readonly, assign) BOOL limitAdTracking; /* limitAdTracking */


//static valueless fields


// methods


@end
