//
//  MPDroidRetryPolicy.m
// 
//  An adapter to the java interface com.mopub.volley.RetryPolicy
//  See http://developer.android.com/reference/com/mopub/volley/RetryPolicy.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidRetryPolicy.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>


@implementation MPDroidRetryPolicy

//properties
@bridge (method, instance) retryWithVolleyError: = retry;


//methods
@bridge (instance, method) currentRetryCount = getCurrentRetryCount;

@bridge (instance, method) currentTimeout = getCurrentTimeout;



//convenience class method


//dealloc method


@end
