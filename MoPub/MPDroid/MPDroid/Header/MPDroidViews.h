//
//  MPDroidViews.h
// 
//  Bridges to the java object com.mopub.common.util.Views
//  See http://developer.android.com/reference/com/mopub/common/util/Views.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidViews
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Views")
@interface MPDroidViews : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)removeFromParent:(AndroidView *)view; /* removeFromParent */


@end
