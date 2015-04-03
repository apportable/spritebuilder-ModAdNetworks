//
//  MPDroidDefaultRetryPolicy.m
// 
//  Bridges to the java object com.mopub.volley.DefaultRetryPolicy
//  See http://developer.android.com/reference/com/mopub/volley/DefaultRetryPolicy.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDefaultRetryPolicy.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>


@implementation MPDroidDefaultRetryPolicy


//constructors
@bridge (constructor) init;
@bridge (constructor) initWithInitialTimeoutMs:maxNumRetries:backoffMultiplier:;


//properties
@bridge (instance, method) currentRetryCount = getCurrentRetryCount;

@bridge (instance, method) currentTimeout = getCurrentTimeout;



//methods
@bridge (method, instance) retryWithVolleyError: = retry;


@end
