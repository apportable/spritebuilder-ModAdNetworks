//
//  MPDroidServerError.h
// 
//  Bridges to the java object com.mopub.volley.ServerError
//  See http://developer.android.com/reference/com/mopub/volley/ServerError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidVolleyError.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNetworkResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidServerError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.ServerError")
@interface MPDroidServerError : MPDroidVolleyError 

// constructors
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)networkResponse; /* <init> */
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods


@end
