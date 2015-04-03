//
//  MPDroidHttpClient.m
// 
//  Bridges to the java object com.mopub.common.HttpClient
//  See http://developer.android.com/reference/com/mopub/common/HttpClient.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHttpClient.h>
//other required types
#import <ApacheKit/ApacheHttpGet.h>
#import <JavaKit/JavaURI.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidHttpClient.h>


@implementation MPDroidHttpClient


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) httpClient = getHttpClient;
@bridge (method, static) initializeHttpGet: = initializeHttpGet;
@bridge (method, static) initializeHttpGet:context: = initializeHttpGet;
@bridge (method, static) urlEncode: = urlEncode;
@bridge (method, static) webViewUserAgentForDefaultUserAgent: = getWebViewUserAgent;
@bridge (method, static) webViewUserAgent = getWebViewUserAgent;
@bridge (method, static) setWebViewUserAgentByUserAgent: = setWebViewUserAgent;


@end
