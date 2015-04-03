//
//  MPDroidDiskLruCacheSnapshot.m
// 
//  Bridges to the java object com.mopub.common.DiskLruCache.Snapshot
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.Snapshot.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDiskLruCacheSnapshot.h>
//other required types
#import <JavaFoundation/JavaLongArray.h>
#import <JavaKit/JavaInputStream.h>
#import <MPDroid/MPDroidDiskLruCacheEditor.h>
#import <MPDroid/MPDroidDiskLruCache.h>


@implementation MPDroidDiskLruCacheSnapshot


//constructors


//properties
@bridge (instance, method) edit = edit;



//methods
@bridge (method, instance) inputStreamForIndex: = getInputStream;
@bridge (method, instance) stringValueForIndex: = getString;
@bridge (method, instance) lengthForIndex: = getLength;
@bridge (method, instance) close = close;


@end
