//
//  MPDroidVolley.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.Volley
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/Volley.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidHttpStack;
@class MPDroidRequestQueue;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidVolleyDefaultCacheDir @"volley"

/**
Java class: MPDroidVolley
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.Volley")
@interface MPDroidVolley : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidRequestQueue *)newRequestQueue:(AndroidContext *)context httpStack:(JavaObject <MPDroidHttpStack> *)stack; /* newRequestQueue */
+ (MPDroidRequestQueue *)newRequestQueue:(AndroidContext *)context; /* newRequestQueue */


@end
