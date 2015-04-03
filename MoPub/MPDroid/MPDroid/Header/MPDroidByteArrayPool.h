//
//  MPDroidByteArrayPool.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.ByteArrayPool
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ByteArrayPool.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaList;
@protocol JavaComparator;


//defines and their comments (static fields with values)


/**
Java class: MPDroidByteArrayPool
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.ByteArrayPool")
@interface MPDroidByteArrayPool : JavaObject 

// constructors
- (instancetype)initWithSizeLimit:(int32_t)sizeLimit; /* <init> */


// properties


//static valueless fields


// methods
- (NSData *)bufForLength:(int32_t)length; /* getBuf */
- (void)returnBuf:(NSData *)buf; /* returnBuf */


@end
