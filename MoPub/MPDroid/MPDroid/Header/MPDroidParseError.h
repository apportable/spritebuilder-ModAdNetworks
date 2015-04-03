//
//  MPDroidParseError.h
// 
//  Bridges to the java object com.mopub.volley.ParseError
//  See http://developer.android.com/reference/com/mopub/volley/ParseError.html for documentation.
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
@class JavaThrowable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidParseError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.ParseError")
@interface MPDroidParseError : MPDroidVolleyError 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)networkResponse; /* <init> */
- (instancetype)initWithThrowable:(JavaThrowable *)cause; /* <init> */


// properties


//static valueless fields


// methods


@end
