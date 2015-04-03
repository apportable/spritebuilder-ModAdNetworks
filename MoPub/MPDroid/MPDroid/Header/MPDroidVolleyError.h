//
//  MPDroidVolleyError.h
// 
//  Bridges to the java object com.mopub.volley.VolleyError
//  See http://developer.android.com/reference/com/mopub/volley/VolleyError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaException.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNetworkResponse;
@class JavaThrowable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidVolleyError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.VolleyError")
@interface MPDroidVolleyError : JavaException 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)response; /* <init> */
- (instancetype)initWithExceptionMessage:(NSString *)exceptionMessage; /* <init> */
- (instancetype)initWithExceptionMessage:(NSString *)exceptionMessage throwable:(JavaThrowable *)reason; /* <init> */
- (instancetype)initWithThrowable:(JavaThrowable *)cause; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidNetworkResponse *networkResponse; /* networkResponse */


//static valueless fields


// methods


@end
