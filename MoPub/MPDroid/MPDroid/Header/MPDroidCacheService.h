//
//  MPDroidCacheService.h
// 
//  Bridges to the java object com.mopub.common.CacheService
//  See http://developer.android.com/reference/com/mopub/common/CacheService.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaInputStream;
@class JavaFile;
@class AndroidContext;
@protocol MPDroidCacheServiceDiskLruCacheGetListener;
@class MPDroidDiskLruCache;


//defines and their comments (static fields with values)
#define MPDroidCacheServiceUniqueCacheName @"mopub-cache"
#define MPDroidCacheServiceAppVersion 1
#define MPDroidCacheServiceValueCount 1
#define MPDroidCacheServiceDiskCacheIndex 0

/**
Java class: MPDroidCacheService
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.CacheService")
@interface MPDroidCacheService : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (BOOL)initializeDiskCache:(AndroidContext *)context; /* initializeDiskCache */
+ (void)initializeWithContext:(AndroidContext *)context; /* initialize */
+ (NSString *)createValidDiskCacheKey:(NSString *)key; /* createValidDiskCacheKey */
+ (JavaFile *)diskCacheDirectoryForContext:(AndroidContext *)context; /* getDiskCacheDirectory */
+ (BOOL)containsKeyDiskCache:(NSString *)key; /* containsKeyDiskCache */
+ (NSString *)filePathDiskCacheForKey:(NSString *)key; /* getFilePathDiskCache */
+ (NSData *)fromDiskCacheForKey:(NSString *)key; /* getFromDiskCache */
+ (void)fromDiskCacheAsyncForKey:(NSString *)key diskLruCacheGetListener:(JavaObject <MPDroidCacheServiceDiskLruCacheGetListener> *)diskLruCacheGetListener; /* getFromDiskCacheAsync */
+ (BOOL)putToDiskCache:(NSString *)key content:(NSData *)content; /* putToDiskCache */
+ (BOOL)putToDiskCache:(NSString *)key inputStream:(JavaInputStream *)content; /* putToDiskCache */
+ (void)putToDiskCacheAsync:(NSString *)key content:(NSData *)content; /* putToDiskCacheAsync */


@end
