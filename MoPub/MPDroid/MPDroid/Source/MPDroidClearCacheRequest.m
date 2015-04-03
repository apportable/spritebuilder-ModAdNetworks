//
//  MPDroidClearCacheRequest.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.ClearCacheRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ClearCacheRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidClearCacheRequest.h>
//other required types
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <MPDroid/MPDroidRequestPriority.h>
#import <JavaKit/JavaRunnable.h>
#import <MPDroid/MPDroidCache.h>


@implementation MPDroidClearCacheRequest


//constructors
@bridge (constructor) initWithCache:runnable:;


//properties
@bridge (instance, method) isCanceled = isCanceled;

@bridge (instance, method) priority = getPriority;



//methods


@end
