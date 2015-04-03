//
//  MPDroidDips.h
// 
//  Bridges to the java object com.mopub.common.util.Dips
//  See http://developer.android.com/reference/com/mopub/common/util/Dips.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDips
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Dips")
@interface MPDroidDips : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (float)pixelsToFloatDips:(float)pixels context:(AndroidContext *)context; /* pixelsToFloatDips */
+ (int32_t)pixelsToIntDips:(float)pixels context:(AndroidContext *)context; /* pixelsToIntDips */
+ (float)dipsToFloatPixels:(float)dips context:(AndroidContext *)context; /* dipsToFloatPixels */
+ (int32_t)dipsToIntPixels:(float)dips context:(AndroidContext *)context; /* dipsToIntPixels */
+ (float)asFloatPixels:(float)dips context:(AndroidContext *)context; /* asFloatPixels */
+ (int32_t)asIntPixels:(float)dips context:(AndroidContext *)context; /* asIntPixels */


@end
