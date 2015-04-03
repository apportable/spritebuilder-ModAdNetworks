//
//  MPDroidHurlStack.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.HurlStack
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HurlStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHurlStack.h>
//other required types
#import <JavaKit/JavaHttpURLConnection.h>
#import <JavaKit/JavaXSSLSocketFactory.h>
#import <ApacheKit/ApacheHttpResponse.h>
#import <MPDroid/MPDroidHurlStackUrlRewriter.h>
#import <MPDroid/MPDroidRequest.h>
#import <JavaKit/JavaMap.h>
#import <ApacheKit/ApacheHttpEntity.h>
#import <JavaKit/JavaURL.h>


@implementation MPDroidHurlStack


//constructors
@bridge (constructor) init;
@bridge (constructor) initWithUrlRewriter:;
@bridge (constructor) initWithUrlRewriter:SSLSocketFactory:;


//properties


//methods
@bridge (method, instance) performRequest:map: = performRequest;


@end
