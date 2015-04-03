//
//  MPDroidBasicNetwork.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.BasicNetwork
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/BasicNetwork.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidNetwork.h>


//necessary forward declarations, classes and protocols
@class MPDroidVolleyError;
@class MPDroidRequest;
@class MPDroidNetworkResponse;
@protocol JavaMap;
@protocol MPDroidHttpStack;
@protocol ApacheStatusLine;
@class MPDroidByteArrayPool;
@class MPDroidCacheEntry;
@protocol ApacheHttpEntity;
@protocol ApacheHeader;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBasicNetwork
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.BasicNetwork")
@interface MPDroidBasicNetwork : JavaObject <MPDroidNetwork>

// constructors
- (instancetype)initWithHttpStack:(JavaObject <MPDroidHttpStack> *)httpStack; /* <init> */
- (instancetype)initWithHttpStack:(JavaObject <MPDroidHttpStack> *)httpStack byteArrayPool:(MPDroidByteArrayPool *)pool; /* <init> */


// properties


//static valueless fields


// methods
- (MPDroidNetworkResponse *)performRequest:(MPDroidRequest *)request; /* performRequest */


@end
