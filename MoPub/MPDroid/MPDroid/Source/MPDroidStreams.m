//
//  MPDroidStreams.m
// 
//  Bridges to the java object com.mopub.common.util.Streams
//  See http://developer.android.com/reference/com/mopub/common/util/Streams.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidStreams.h>
//other required types
#import <JavaKit/JavaInputStream.h>
#import <JavaKit/JavaOutputStream.h>
#import <JavaKit/JavaCloseable.h>


@implementation MPDroidStreams


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) copyContent:outputStream: = copyContent;
@bridge (method, static) copyContent:outputStream:maxBytes: = copyContent;
@bridge (method, static) readStream:buffer: = readStream;
@bridge (method, static) closeStream: = closeStream;


@end
