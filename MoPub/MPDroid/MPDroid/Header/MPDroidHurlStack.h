//
//  MPDroidHurlStack.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.HurlStack
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HurlStack.html for documentation.
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
@protocol ApacheHttpResponse;
@class JavaHttpURLConnection;
@class JavaXSSLSocketFactory;
@protocol ApacheHttpEntity;
@protocol JavaMap;
@protocol MPDroidHurlStackUrlRewriter;
@class JavaURL;


//defines and their comments (static fields with values)
#define MPDroidHurlStackHeaderContentType @"Content-Type"

/**
Java class: MPDroidHurlStack
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.HurlStack")
@interface MPDroidHurlStack : JavaObject <MPDroidHttpStack>

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithUrlRewriter:(JavaObject <MPDroidHurlStackUrlRewriter> *)urlRewriter; /* <init> */
- (instancetype)initWithUrlRewriter:(JavaObject <MPDroidHurlStackUrlRewriter> *)urlRewriter SSLSocketFactory:(JavaXSSLSocketFactory *)sslSocketFactory; /* <init> */


// properties


//static valueless fields


// methods
- (JavaObject <ApacheHttpResponse> *)performRequest:(MPDroidRequest *)request map:(JavaObject <JavaMap> *)additionalHeaders; /* performRequest */


@end
