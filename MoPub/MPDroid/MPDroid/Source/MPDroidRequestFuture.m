//
//  MPDroidRequestFuture.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.RequestFuture
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/RequestFuture.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidRequestFuture.h>
//other required types
#import <JavaKit/JavaTimeUnit.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidRequest.h>
#import <JavaKit/JavaLong.h>


@implementation MPDroidRequestFuture


//constructors


//properties
@bridge (instance, method) isCancelled = isCancelled;

@bridge (instance, method) isDone = isDone;



//methods
@bridge (method, static) newFuture = newFuture;
@bridge (method, instance) setRequest: = setRequest;
@bridge (method, instance) cancelWithMayInterruptIfRunning: = cancel;
@bridge (method, instance) result = get;
@bridge (method, instance) objectForTimeout:timeUnit: = get;
@bridge (method, instance) onResponse: = onResponse;
@bridge (method, instance) onErrorResponse: = onErrorResponse;


@end
