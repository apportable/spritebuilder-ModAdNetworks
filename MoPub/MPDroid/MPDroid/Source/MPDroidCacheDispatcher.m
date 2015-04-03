//
//  MPDroidCacheDispatcher.m
// 
//  Bridges to the java object com.mopub.volley.CacheDispatcher
//  See http://developer.android.com/reference/com/mopub/volley/CacheDispatcher.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCacheDispatcher.h>
//other required types
#import <MPDroid/MPDroidResponseDelivery.h>
#import <MPDroid/MPDroidCache.h>
#import <JavaKit/JavaBlockingQueue.h>


@implementation MPDroidCacheDispatcher


//constructors
@bridge (constructor) initWithBlockingQueue:blockingQueue:cache:responseDelivery:;


//properties


//methods
@bridge (method, instance) quit = quit;
@bridge (method, instance) run = run;


@end
