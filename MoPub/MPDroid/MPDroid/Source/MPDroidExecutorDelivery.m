//
//  MPDroidExecutorDelivery.m
// 
//  Bridges to the java object com.mopub.volley.ExecutorDelivery
//  See http://developer.android.com/reference/com/mopub/volley/ExecutorDelivery.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidExecutorDelivery.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <JavaKit/JavaExecutor.h>
#import <MPDroid/MPDroidRequest.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidResponse.h>


@implementation MPDroidExecutorDelivery


//constructors
@bridge (constructor) initWithHandler:;
@bridge (constructor) initWithExecutor:;


//properties


//methods
@bridge (method, instance) postResponse:response: = postResponse;
@bridge (method, instance) postResponse:response:runnable: = postResponse;
@bridge (method, instance) postError:volleyError: = postError;


@end
