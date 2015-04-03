//
//  MPDroidResponseDelivery.m
// 
//  An adapter to the java interface com.mopub.volley.ResponseDelivery
//  See http://developer.android.com/reference/com/mopub/volley/ResponseDelivery.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidResponseDelivery.h>
//other required types
#import <MPDroid/MPDroidRequest.h>
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <JavaKit/JavaRunnable.h>


@implementation MPDroidResponseDelivery

//properties
@bridge (method, instance) postError:volleyError: = postError;
@bridge (method, instance) postResponse:response: = postResponse;
@bridge (method, instance) postResponse:response:runnable: = postResponse;


//methods


//convenience class method


//dealloc method


@end
