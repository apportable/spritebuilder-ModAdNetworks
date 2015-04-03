//
//  MPDroidJsonRequest.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.JsonRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/JsonRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidJsonRequest.h>
//other required types
#import <MPDroid/MPDroidResponseListener.h>
#import <MPDroid/MPDroidResponseErrorListener.h>
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidNetworkResponse.h>


@implementation MPDroidJsonRequest


//constructors
@bridge (constructor) initWithUrl:requestBody:listener:errorListener:;
@bridge (constructor) initWithMethod:url:requestBody:listener:errorListener:;


//properties
@bridge (instance, method) body = getBody;

@bridge (instance, method) bodyContentType = getBodyContentType;



//methods


@end
