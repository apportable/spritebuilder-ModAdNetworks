//
//  MPDroidHttpStack.h
// 
//  Bridges to the java interface com.mopub.volley.toolbox.HttpStack
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaMap;
@protocol ApacheHttpResponse;
@class MPDroidRequest;


//static fields


/**
Java interface: MPDroidHttpStack
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.toolbox.HttpStack")
@protocol MPDroidHttpStack 

// properties


// methods
- (JavaObject <ApacheHttpResponse> *)performRequest:(MPDroidRequest *)request map:(JavaObject <JavaMap> *)additionalHeaders; /* performRequest */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.toolbox.HttpStack")
@interface MPDroidHttpStack : JavaObject <MPDroidHttpStack>

//properties for handlers


//convenience class method


@end