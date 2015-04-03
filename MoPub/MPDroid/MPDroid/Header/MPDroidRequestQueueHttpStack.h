//
//  MPDroidRequestQueueHttpStack.h
// 
//  Bridges to the java object com.mopub.network.RequestQueueHttpStack
//  See http://developer.android.com/reference/com/mopub/network/RequestQueueHttpStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidHurlStack.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@protocol ApacheHttpResponse;
@class JavaXSSLSocketFactory;
@protocol MPDroidHurlStackUrlRewriter;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidRequestQueueHttpStack
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.RequestQueueHttpStack")
@interface MPDroidRequestQueueHttpStack : MPDroidHurlStack 

// constructors
- (instancetype)initWithUserAgent:(NSString *)userAgent; /* <init> */
- (instancetype)initWithUserAgent:(NSString *)userAgent urlRewriter:(JavaObject <MPDroidHurlStackUrlRewriter> *)urlRewriter; /* <init> */
- (instancetype)initWithUserAgent:(NSString *)userAgent urlRewriter:(JavaObject <MPDroidHurlStackUrlRewriter> *)urlRewriter SSLSocketFactory:(JavaXSSLSocketFactory *)sslSocketFactory; /* <init> */


// properties


//static valueless fields


// methods
- (JavaObject <ApacheHttpResponse> *)performRequest:(MPDroidRequest *)request map:(JavaObject <JavaMap> *)additionalHeaders; /* performRequest */


@end
