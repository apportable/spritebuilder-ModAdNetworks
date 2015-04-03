//
//  MPDroidStreams.h
// 
//  Bridges to the java object com.mopub.common.util.Streams
//  See http://developer.android.com/reference/com/mopub/common/util/Streams.html for documentation.
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
@protocol JavaCloseable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidStreams
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Streams")
@interface MPDroidStreams : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)copyContent:(JavaInputStream *)inputStream outputStream:(JavaOutputStream *)outputStream; /* copyContent */
+ (void)copyContent:(JavaInputStream *)inputStream outputStream:(JavaOutputStream *)outputStream maxBytes:(int64_t)maxBytes; /* copyContent */
+ (void)readStream:(JavaInputStream *)inputStream buffer:(NSData *)buffer; /* readStream */
+ (void)closeStream:(JavaObject <JavaCloseable> *)stream; /* closeStream */


@end
