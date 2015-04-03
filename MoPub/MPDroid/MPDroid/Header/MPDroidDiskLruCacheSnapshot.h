//
//  MPDroidDiskLruCacheSnapshot.h
// 
//  Bridges to the java object com.mopub.common.DiskLruCache.Snapshot
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.Snapshot.html for documentation.
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
@class JavaLongArray;
@class JavaInputStream;
@class MPDroidDiskLruCacheEditor;
@class MPDroidDiskLruCache;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDiskLruCacheSnapshot
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DiskLruCache$Snapshot")
@interface MPDroidDiskLruCacheSnapshot : JavaObject <JavaCloseable>

// constructors


// properties
@property (nonatomic, readonly, retain) MPDroidDiskLruCacheEditor *edit; /* edit */


//static valueless fields


// methods
- (JavaInputStream *)inputStreamForIndex:(int32_t)index; /* getInputStream */
- (NSString *)stringValueForIndex:(int32_t)index; /* getString */
- (int64_t)lengthForIndex:(int32_t)index; /* getLength */
- (void)close; /* close */


@end
