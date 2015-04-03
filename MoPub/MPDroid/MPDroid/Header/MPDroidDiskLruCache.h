//
//  MPDroidDiskLruCache.h
// 
//  Bridges to the java object com.mopub.common.DiskLruCache
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaCloseable.h>


//necessary forward declarations, classes and protocols
@class JavaInputStream;
@class JavaFile;
@class JavaWriter;
@class MPDroidDiskLruCacheEditor;
@class JavaPattern;
@class JavaLinkedHashMap;
@protocol JavaCallable;
@class MPDroidDiskLruCacheSnapshot;
@class JavaOutputStream;
@class JavaThreadPoolExecutor;


//defines and their comments (static fields with values)
#define MPDroidDiskLruCacheJournalFile @"journal"
#define MPDroidDiskLruCacheJournalFileTemp @"journal.tmp"
#define MPDroidDiskLruCacheJournalFileBackup @"journal.bkp"
#define MPDroidDiskLruCacheMagic @"libcore.io.DiskLruCache"
#define MPDroidDiskLruCacheVersion1 @"1"
#define MPDroidDiskLruCacheAnySequenceNumber -1ll
#define MPDroidDiskLruCacheClean @"CLEAN"
#define MPDroidDiskLruCacheDirty @"DIRTY"
#define MPDroidDiskLruCacheRemove @"REMOVE"
#define MPDroidDiskLruCacheRead @"READ"

/**
Java class: MPDroidDiskLruCache
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DiskLruCache")
@interface MPDroidDiskLruCache : JavaObject <JavaCloseable>

// constructors


// properties
@property (nonatomic, readonly, assign) int64_t size; /* size */
@property (nonatomic, readonly, retain) JavaFile *directory; /* getDirectory */
@property (nonatomic, assign) int64_t maxSize; /* getMaxSize, setMaxSize */
@property (nonatomic, readonly, getter=isClosed, assign) BOOL closed; /* isClosed */


//static valueless fields


// methods
+ (MPDroidDiskLruCache *)openWithFile:(JavaFile *)directory appVersion:(int32_t)appVersion valueCount:(int32_t)valueCount maxSize:(int64_t)maxSize; /* open */
- (MPDroidDiskLruCacheSnapshot *)diskLruCacheSnapshotForKey:(NSString *)key; /* get */
- (MPDroidDiskLruCacheEditor *)editWithKey:(NSString *)key; /* edit */
- (BOOL)removeWithKey:(NSString *)key; /* remove */
- (void)flush; /* flush */
- (void)close; /* close */
- (void)delete; /* delete */


@end
