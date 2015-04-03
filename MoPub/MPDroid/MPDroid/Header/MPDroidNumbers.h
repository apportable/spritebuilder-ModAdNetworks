//
//  MPDroidNumbers.h
// 
//  Bridges to the java object com.mopub.common.util.Numbers
//  See http://developer.android.com/reference/com/mopub/common/util/Numbers.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaDouble;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNumbers
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Numbers")
@interface MPDroidNumbers : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (JavaDouble *)parseDouble:(JavaObject *)value; /* parseDouble */


@end
