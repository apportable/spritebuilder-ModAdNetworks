//
//  MPDroidNoConnectionError.h
// 
//  Bridges to the java object com.mopub.volley.NoConnectionError
//  See http://developer.android.com/reference/com/mopub/volley/NoConnectionError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidNetworkError.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaThrowable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNoConnectionError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.NoConnectionError")
@interface MPDroidNoConnectionError : MPDroidNetworkError 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithThrowable:(JavaThrowable *)reason; /* <init> */


// properties


//static valueless fields


// methods


@end
