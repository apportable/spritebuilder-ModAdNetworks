//
//  MPDroidVolleyError.m
// 
//  Bridges to the java object com.mopub.volley.VolleyError
//  See http://developer.android.com/reference/com/mopub/volley/VolleyError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVolleyError.h>
//other required types
#import <MPDroid/MPDroidNetworkResponse.h>
#import <JavaKit/JavaThrowable.h>


@implementation MPDroidVolleyError


//constructors
@bridge (constructor) init;
@bridge (constructor) initWithNetworkResponse:;
@bridge (constructor) initWithExceptionMessage:;
@bridge (constructor) initWithExceptionMessage:throwable:;
@bridge (constructor) initWithThrowable:;


//properties
@bridge (field) networkResponse = networkResponse;



//methods


@end
