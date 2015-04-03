//
//  MPDroidHttpClientFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.HttpClientFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HttpClientFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class ApacheDefaultHttpClient;


//defines and their comments (static fields with values)
#define MPDroidHttpClientFactorySocketSize 8192

/**
Java class: MPDroidHttpClientFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.HttpClientFactory")
@interface MPDroidHttpClientFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (ApacheDefaultHttpClient *)createWithTimeoutMilliseconds:(int32_t)timeoutMilliseconds; /* create */
+ (ApacheDefaultHttpClient *)create; /* create */


@end
