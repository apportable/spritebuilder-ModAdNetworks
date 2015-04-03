//
//  MPDroidUtils.h
// 
//  Bridges to the java object com.mopub.common.util.Utils
//  See http://developer.android.com/reference/com/mopub/common/util/Utils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaAtomicLong;


//defines and their comments (static fields with values)


/**
Java class: MPDroidUtils
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Utils")
@interface MPDroidUtils : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (NSString *)sha1WithString:(NSString *)string; /* sha1 */
+ (int64_t)generateUniqueId; /* generateUniqueId */
+ (BOOL)bitMaskContainsFlag:(int32_t)bitMask flag:(int32_t)flag; /* bitMaskContainsFlag */


@end
