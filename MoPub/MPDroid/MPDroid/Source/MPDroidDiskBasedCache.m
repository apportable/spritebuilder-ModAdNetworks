//
//  MPDroidDiskBasedCache.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.DiskBasedCache
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/DiskBasedCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDiskBasedCache.h>
//other required types
#import <JavaKit/JavaInputStream.h>
#import <JavaKit/JavaFile.h>
#import <JavaKit/JavaMap.h>
#import <MPDroid/MPDroidCacheEntry.h>
#import <JavaKit/JavaOutputStream.h>


@implementation MPDroidDiskBasedCache


//constructors
@bridge (constructor) initWithFile:maxCacheSizeInBytes:;
@bridge (constructor) initWithFile:;


//properties


//methods
@bridge (method, instance) clear = clear;
@bridge (method, instance) cacheEntryForKey: = get;
@bridge (method, instance) initialize = initialize;
@bridge (method, instance) invalidateWithKey:fullExpire: = invalidate;
@bridge (method, instance) putWithKey:entry: = put;
@bridge (method, instance) removeWithKey: = remove;
@bridge (method, instance) fileForKeyForKey: = getFileForKey;


@end
