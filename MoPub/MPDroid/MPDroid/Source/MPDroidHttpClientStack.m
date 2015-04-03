//
//  MPDroidHttpClientStack.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.HttpClientStack
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpClientStack.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHttpClientStack.h>
//other required types
#import <JavaKit/JavaList.h>
#import <ApacheKit/ApacheHttpEntityEnclosingRequestBase.h>
#import <ApacheKit/ApacheHttpResponse.h>
#import <MPDroid/MPDroidRequest.h>
#import <ApacheKit/ApacheHttpUriRequest.h>
#import <JavaKit/JavaMap.h>
#import <ApacheKit/ApacheHttpClient.h>


@implementation MPDroidHttpClientStack


//constructors
@bridge (constructor) initWithHttpClient:;


//properties


//methods
@bridge (method, instance) performRequest:map: = performRequest;


@end
