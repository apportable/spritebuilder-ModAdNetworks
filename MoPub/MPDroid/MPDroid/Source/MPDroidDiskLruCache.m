//
//  MPDroidDiskLruCache.m
// 
//  Bridges to the java object com.mopub.common.DiskLruCache
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDiskLruCache.h>
//other required types
#import <JavaKit/JavaInputStream.h>
#import <JavaKit/JavaFile.h>
#import <JavaKit/JavaWriter.h>
#import <MPDroid/MPDroidDiskLruCacheEditor.h>
#import <JavaKit/JavaPattern.h>
#import <JavaKit/JavaLinkedHashMap.h>
#import <JavaKit/JavaCallable.h>
#import <MPDroid/MPDroidDiskLruCacheSnapshot.h>
#import <JavaKit/JavaOutputStream.h>
#import <JavaKit/JavaThreadPoolExecutor.h>


@implementation MPDroidDiskLruCache


//constructors


//properties
@bridge (instance, method) size = size;

@bridge (instance, method) directory = getDirectory;

@bridge (instance, method) maxSize = getMaxSize;
@bridge (instance, method) setMaxSize: = setMaxSize;
@bridge (instance, method) isClosed = isClosed;



//methods
@bridge (method, static) openWithFile:appVersion:valueCount:maxSize: = open;
@bridge (method, instance) diskLruCacheSnapshotForKey: = get;
@bridge (method, instance) editWithKey: = edit;
@bridge (method, instance) removeWithKey: = remove;
@bridge (method, instance) flush = flush;
@bridge (method, instance) close = close;
@bridge (method, instance) delete = "delete";


@end
