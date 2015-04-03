//
//  MPDroidDeviceUtils.h
// 
//  Bridges to the java object com.mopub.common.util.DeviceUtils
//  See http://developer.android.com/reference/com/mopub/common/util/DeviceUtils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidActivity;
@class JavaFile;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidDeviceUtilsMaxMemoryCacheSize 31457280
#define MPDroidDeviceUtilsMinDiskCacheSize 31457280
#define MPDroidDeviceUtilsMaxDiskCacheSize 104857600

/**
Java class: MPDroidDeviceUtils
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.DeviceUtils")
@interface MPDroidDeviceUtils : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (NSString *)hashedUdidForContext:(AndroidContext *)context; /* getHashedUdid */
+ (BOOL)isNetworkAvailable:(AndroidContext *)context; /* isNetworkAvailable */
+ (int32_t)memoryCacheSizeBytes:(AndroidContext *)context; /* memoryCacheSizeBytes */
+ (int64_t)diskCacheSizeBytes:(JavaFile *)dir minSize:(int64_t)minSize; /* diskCacheSizeBytes */
+ (int64_t)diskCacheSizeBytes:(JavaFile *)dir; /* diskCacheSizeBytes */
+ (int32_t)screenOrientationForActivity:(AndroidActivity *)activity; /* getScreenOrientation */


@end
