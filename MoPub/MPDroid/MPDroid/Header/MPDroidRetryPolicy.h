//
//  MPDroidRetryPolicy.h
// 
//  Bridges to the java interface com.mopub.volley.RetryPolicy
//  See http://developer.android.com/reference/com/mopub/volley/RetryPolicy.html for documentation.
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
Java interface: MPDroidRetryPolicy
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.RetryPolicy")
@protocol MPDroidRetryPolicy 

// properties
@property (nonatomic, readonly, assign) int32_t currentRetryCount;
@property (nonatomic, readonly, assign) int32_t currentTimeout;


// methods
- (void)retryWithVolleyError:(MPDroidVolleyError *)error; /* retry */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.RetryPolicy")
@interface MPDroidRetryPolicy : JavaObject <MPDroidRetryPolicy>

//properties for handlers


//convenience class method


@end