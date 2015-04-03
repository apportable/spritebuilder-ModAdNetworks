//
//  MPDroidHttpClientFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.HttpClientFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/HttpClientFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHttpClientFactory.h>
//other required types
#import <ApacheKit/ApacheDefaultHttpClient.h>


@implementation MPDroidHttpClientFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithTimeoutMilliseconds: = create;
@bridge (method, static) create = create;


@end
