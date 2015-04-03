//
//  MPDroidRequestQueueHttpStack.m
// 
//  Bridges to the java object com.mopub.network.RequestQueueHttpStack
//  See http://developer.android.com/reference/com/mopub/network/RequestQueueHttpStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidRequestQueueHttpStack.h>
//other required types
#import <MPDroid/MPDroidRequest.h>
#import <ApacheKit/ApacheHttpResponse.h>
#import <JavaKit/JavaXSSLSocketFactory.h>
#import <MPDroid/MPDroidHurlStackUrlRewriter.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidRequestQueueHttpStack


//constructors
@bridge (constructor) initWithUserAgent:;
@bridge (constructor) initWithUserAgent:urlRewriter:;
@bridge (constructor) initWithUserAgent:urlRewriter:SSLSocketFactory:;


//properties


//methods
@bridge (method, instance) performRequest:map: = performRequest;


@end
