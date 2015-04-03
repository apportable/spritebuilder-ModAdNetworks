//
//  MPDroidNetwork.h
// 
//  Bridges to the java interface com.mopub.volley.Network
//  See http://developer.android.com/reference/com/mopub/volley/Network.html for documentation.
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
@class MPDroidNetworkResponse;


//static fields


/**
Java interface: MPDroidNetwork
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.Network")
@protocol MPDroidNetwork 

// properties


// methods
- (MPDroidNetworkResponse *)performRequest:(MPDroidRequest *)request; /* performRequest */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.Network")
@interface MPDroidNetwork : JavaObject <MPDroidNetwork>

//properties for handlers


//convenience class method


@end