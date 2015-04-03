//
//  MPDroidPoolingByteArrayOutputStream.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.PoolingByteArrayOutputStream
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/PoolingByteArrayOutputStream.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaByteArrayOutputStream.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidByteArrayPool;


//defines and their comments (static fields with values)
#define MPDroidPoolingByteArrayOutputStreamDefaultSize 256

/**
Java class: MPDroidPoolingByteArrayOutputStream
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.PoolingByteArrayOutputStream")
@interface MPDroidPoolingByteArrayOutputStream : JavaByteArrayOutputStream 

// constructors
- (instancetype)initWithByteArrayPool:(MPDroidByteArrayPool *)pool; /* <init> */
- (instancetype)initWithByteArrayPool:(MPDroidByteArrayPool *)pool size:(int32_t)size; /* <init> */


// properties


//static valueless fields


// methods
- (void)close; /* close */
- (void)finalize; /* finalize */
- (void)writeWithBuffer:(NSData *)buffer offset:(int32_t)offset length:(int32_t)length; /* write */
- (void)writeWithOneByte:(int32_t)oneByte; /* write */


@end
