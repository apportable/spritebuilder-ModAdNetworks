//
//  MPDroidDeviceUtils.m
// 
//  Bridges to the java object com.mopub.common.util.DeviceUtils
//  See http://developer.android.com/reference/com/mopub/common/util/DeviceUtils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDeviceUtils.h>
//other required types
#import <AndroidKit/AndroidActivity.h>
#import <JavaKit/JavaFile.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidDeviceUtils


//constructors


//properties


//methods
@bridge (method, static) hashedUdidForContext: = getHashedUdid;
@bridge (method, static) isNetworkAvailable: = isNetworkAvailable;
@bridge (method, static) memoryCacheSizeBytes: = memoryCacheSizeBytes;
@bridge (method, static) diskCacheSizeBytes:minSize: = diskCacheSizeBytes;
@bridge (method, static) diskCacheSizeBytes: = diskCacheSizeBytes;
@bridge (method, static) screenOrientationForActivity: = getScreenOrientation;


@end
