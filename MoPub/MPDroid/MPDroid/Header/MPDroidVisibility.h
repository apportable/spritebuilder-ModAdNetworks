//
//  MPDroidVisibility.h
// 
//  Bridges to the java object com.mopub.common.util.Visibility
//  See http://developer.android.com/reference/com/mopub/common/util/Visibility.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidVisibility
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Visibility")
@interface MPDroidVisibility : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (BOOL)isScreenVisible:(int32_t)visibility; /* isScreenVisible */
+ (BOOL)hasScreenVisibilityChanged:(int32_t)oldVisibility newVisibility:(int32_t)newVisibility; /* hasScreenVisibilityChanged */


@end
