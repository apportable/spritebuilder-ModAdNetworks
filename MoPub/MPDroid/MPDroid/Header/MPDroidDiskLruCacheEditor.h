//
//  MPDroidDiskLruCacheEditor.h
// 
//  Bridges to the java object com.mopub.common.DiskLruCache.Editor
//  See http://developer.android.com/reference/com/mopub/common/DiskLruCache.Editor.html for documentation.
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
@class JavaOutputStream;
@class MPDroidDiskLruCache;
@class JavaBooleanArray;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDiskLruCacheEditor
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DiskLruCache$Editor")
@interface MPDroidDiskLruCacheEditor : JavaObject 

// constructors


// properties


//static valueless fields


// methods
- (JavaInputStream *)newInputStream:(int32_t)index; /* newInputStream */
- (NSString *)stringValueForIndex:(int32_t)index; /* getString */
- (JavaOutputStream *)newOutputStream:(int32_t)index; /* newOutputStream */
- (void)setIndex:(int32_t)index stringValue:(NSString *)value; /* set */
- (void)commit; /* commit */
- (void)abort; /* abort */
- (void)abortUnlessCommitted; /* abortUnlessCommitted */


@end
