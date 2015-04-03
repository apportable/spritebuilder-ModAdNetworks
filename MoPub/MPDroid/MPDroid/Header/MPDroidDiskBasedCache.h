//
//  MPDroidDiskBasedCache.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.DiskBasedCache
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/DiskBasedCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidCache.h>


//necessary forward declarations, classes and protocols
@class JavaInputStream;
@class JavaFile;
@protocol JavaMap;
@class MPDroidCacheEntry;
@class JavaOutputStream;


//defines and their comments (static fields with values)
#define MPDroidDiskBasedCacheDefaultDiskUsageBytes 5242880
#define MPDroidDiskBasedCacheHysteresisFactor 0.900000
#define MPDroidDiskBasedCacheCacheMagic 538183203

/**
Java class: MPDroidDiskBasedCache
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.DiskBasedCache")
@interface MPDroidDiskBasedCache : JavaObject <MPDroidCache>

// constructors
- (instancetype)initWithFile:(JavaFile *)rootDirectory maxCacheSizeInBytes:(int32_t)maxCacheSizeInBytes; /* <init> */
- (instancetype)initWithFile:(JavaFile *)rootDirectory; /* <init> */


// properties


//static valueless fields


// methods
- (void)clear; /* clear */
- (MPDroidCacheEntry *)cacheEntryForKey:(NSString *)key; /* get */
- (void)initialize; /* initialize */
- (void)invalidateWithKey:(NSString *)key fullExpire:(BOOL)fullExpire; /* invalidate */
- (void)putWithKey:(NSString *)key entry:(MPDroidCacheEntry *)entry; /* put */
- (void)removeWithKey:(NSString *)key; /* remove */
- (JavaFile *)fileForKeyForKey:(NSString *)key; /* getFileForKey */


@end
