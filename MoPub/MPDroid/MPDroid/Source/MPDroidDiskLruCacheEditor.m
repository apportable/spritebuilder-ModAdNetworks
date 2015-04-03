//
//  MPDroidDiskLruCacheEditor.m
// 
//  Bridges to the java object com.mopub.common.DiskLruCache.Editor
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.Editor.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDiskLruCacheEditor.h>
//other required types
#import <JavaKit/JavaInputStream.h>
#import <JavaKit/JavaOutputStream.h>
#import <MPDroid/MPDroidDiskLruCache.h>
#import <JavaFoundation/JavaBooleanArray.h>


@implementation MPDroidDiskLruCacheEditor


//constructors


//properties


//methods
@bridge (method, instance) newInputStream: = newInputStream;
@bridge (method, instance) stringValueForIndex: = getString;
@bridge (method, instance) newOutputStream: = newOutputStream;
@bridge (method, instance) setIndex:stringValue: = set;
@bridge (method, instance) commit = commit;
@bridge (method, instance) abort = abort;
@bridge (method, instance) abortUnlessCommitted = abortUnlessCommitted;


@end
