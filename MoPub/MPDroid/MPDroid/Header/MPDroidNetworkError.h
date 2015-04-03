//
//  MPDroidNetworkError.h
// 
//  Bridges to the java object com.mopub.volley.NetworkError
//  See http://developer.android.com/reference/com/mopub/volley/NetworkError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidVolleyError.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaThrowable;
@class MPDroidNetworkResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNetworkError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.NetworkError")
@interface MPDroidNetworkError : MPDroidVolleyError 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithThrowable:(JavaThrowable *)cause; /* <init> */
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)networkResponse; /* <init> */


// properties


//static valueless fields


// methods


@end
