//
//  MPDroidFiles.h
// 
//  Bridges to the java object com.mopub.common.util.Files
//  See http://developer.android.com/reference/com/mopub/common/util/Files.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaFile;


//defines and their comments (static fields with values)


/**
Java class: MPDroidFiles
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Files")
@interface MPDroidFiles : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (JavaFile *)createDirectory:(NSString *)absolutePath; /* createDirectory */
+ (int32_t)intLength:(JavaFile *)file; /* intLength */


@end
