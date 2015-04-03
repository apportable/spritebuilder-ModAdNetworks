//
//  MPDroidResponseDelivery.h
// 
//  Bridges to the java interface com.mopub.volley.ResponseDelivery
//  See http://developer.android.com/reference/com/mopub/volley/ResponseDelivery.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@class MPDroidResponse;
@class MPDroidVolleyError;
@protocol JavaRunnable;


//static fields


/**
Java interface: MPDroidResponseDelivery
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.ResponseDelivery")
@protocol MPDroidResponseDelivery 

// properties


// methods
- (void)postResponse:(MPDroidRequest *)request response:(MPDroidResponse *)response; /* postResponse */
- (void)postResponse:(MPDroidRequest *)request response:(MPDroidResponse *)response runnable:(JavaObject <JavaRunnable> *)runnable; /* postResponse */
- (void)postError:(MPDroidRequest *)request volleyError:(MPDroidVolleyError *)error; /* postError */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.ResponseDelivery")
@interface MPDroidResponseDelivery : JavaObject <MPDroidResponseDelivery>

//properties for handlers


//convenience class method


@end