//
//  MPDroidResponseErrorListener.h
// 
//  Bridges to the java interface com.mopub.volley.Response.ErrorListener
//  See http://developer.android.com/reference/com/mopub/volley/Response.ErrorListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidVolleyError;


//static fields


/**
Java interface: MPDroidResponseErrorListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.Response$ErrorListener")
@protocol MPDroidResponseErrorListener 

// properties


// methods
- (void)onErrorResponse:(MPDroidVolleyError *)error; /* onErrorResponse */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.Response$ErrorListener")
@interface MPDroidResponseErrorListener : JavaObject <MPDroidResponseErrorListener>

//properties for handlers
@property (nonatomic, copy) void (^onErrorResponseHandler)(MPDroidVolleyError *);


//convenience class method
+ (MPDroidResponseErrorListener *)listenerWithBlock:(void (^)(MPDroidVolleyError *))onErrorResponseHandler;

@end