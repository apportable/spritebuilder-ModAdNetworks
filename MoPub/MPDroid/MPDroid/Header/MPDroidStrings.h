//
//  MPDroidStrings.h
// 
//  Bridges to the java object com.mopub.common.util.Strings
//  See http://developer.android.com/reference/com/mopub/common/util/Strings.html for documentation.
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


//defines and their comments (static fields with values)


/**
Java class: MPDroidStrings
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Strings")
@interface MPDroidStrings : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (NSString *)fromStream:(JavaInputStream *)inputStream; /* fromStream */


@end
