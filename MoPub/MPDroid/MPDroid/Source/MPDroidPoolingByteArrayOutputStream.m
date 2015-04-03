//
//  MPDroidPoolingByteArrayOutputStream.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.PoolingByteArrayOutputStream
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/PoolingByteArrayOutputStream.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidPoolingByteArrayOutputStream.h>
//other required types
#import <MPDroid/MPDroidByteArrayPool.h>


@implementation MPDroidPoolingByteArrayOutputStream


//constructors
@bridge (constructor) initWithByteArrayPool:;
@bridge (constructor) initWithByteArrayPool:size:;


//properties


//methods
@bridge (method, instance) close = close;
@bridge (method, instance) finalize = finalize;
@bridge (method, instance) writeWithBuffer:offset:length: = write;
@bridge (method, instance) writeWithOneByte: = write;


@end
