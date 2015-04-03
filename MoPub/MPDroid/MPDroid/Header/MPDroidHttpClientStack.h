//
//  MPDroidHttpClientStack.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.HttpClientStack
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpClientStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidHttpStack.h>


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@class ApacheHttpEntityEnclosingRequestBase;
@protocol ApacheHttpUriRequest;
@protocol ApacheHttpResponse;
@protocol JavaList;
@protocol ApacheHttpClient;
@protocol JavaMap;


//defines and their comments (static fields with values)
#define MPDroidHttpClientStackHeaderContentType @"Content-Type"

/**
Java class: MPDroidHttpClientStack
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.HttpClientStack")
@interface MPDroidHttpClientStack : JavaObject <MPDroidHttpStack>

// constructors
- (instancetype)initWithHttpClient:(JavaObject <ApacheHttpClient> *)client; /* <init> */


// properties


//static valueless fields


// methods
- (JavaObject <ApacheHttpResponse> *)performRequest:(MPDroidRequest *)request map:(JavaObject <JavaMap> *)additionalHeaders; /* performRequest */


@end
