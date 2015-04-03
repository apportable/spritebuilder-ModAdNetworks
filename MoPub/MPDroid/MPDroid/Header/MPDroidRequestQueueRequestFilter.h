//
//  MPDroidRequestQueueRequestFilter.h
// 
//  Bridges to the java interface com.mopub.volley.RequestQueue.RequestFilter
//  See http://developer.android.com/reference/com/mopub/volley/RequestQueue.RequestFilter.html for documentation.
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


//static fields


/**
Java interface: MPDroidRequestQueueRequestFilter
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.RequestQueue$RequestFilter")
@protocol MPDroidRequestQueueRequestFilter 

// properties


// methods
- (BOOL)applyWithRequest:(MPDroidRequest *)request; /* apply */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.RequestQueue$RequestFilter")
@interface MPDroidRequestQueueRequestFilter : JavaObject <MPDroidRequestQueueRequestFilter>

//properties for handlers


//convenience class method


@end