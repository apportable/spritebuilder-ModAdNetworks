//
//  MPDroidCacheService.m
// 
//  Bridges to the java object com.mopub.common.CacheService
//  See http://developer.android.com/reference/com/mopub/common/CacheService.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCacheService.h>
//other required types
#import <JavaKit/JavaInputStream.h>
#import <JavaKit/JavaFile.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidCacheServiceDiskLruCacheGetListener.h>
#import <MPDroid/MPDroidDiskLruCache.h>


@implementation MPDroidCacheService


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) initializeDiskCache: = initializeDiskCache;
@bridge (method, static) initializeWithContext: = initialize;
@bridge (method, static) createValidDiskCacheKey: = createValidDiskCacheKey;
@bridge (method, static) diskCacheDirectoryForContext: = getDiskCacheDirectory;
@bridge (method, static) containsKeyDiskCache: = containsKeyDiskCache;
@bridge (method, static) filePathDiskCacheForKey: = getFilePathDiskCache;
@bridge (method, static) fromDiskCacheForKey: = getFromDiskCache;
@bridge (method, static) fromDiskCacheAsyncForKey:diskLruCacheGetListener: = getFromDiskCacheAsync;
@bridge (method, static) putToDiskCache:content: = putToDiskCache;
@bridge (method, static) putToDiskCache:inputStream: = putToDiskCache;
@bridge (method, static) putToDiskCacheAsync:content: = putToDiskCacheAsync;


@end
