//
//  MPDroidRequestQueue.m
// 
//  Bridges to the java object com.mopub.volley.RequestQueue
//  See http://developer.android.com/reference/com/mopub/volley/RequestQueue.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidRequestQueue.h>
//other required types
#import <MPDroid/MPDroidRequestQueueRequestFilter.h>
#import <MPDroid/MPDroidRequest.h>
#import <MPDroid/MPDroidResponseDelivery.h>
#import <MPDroid/MPDroidNetworkDispatcher.h>
#import <MPDroid/MPDroidCache.h>
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaAtomicInteger.h>
#import <MPDroid/MPDroidNetwork.h>
#import <JavaKit/JavaSet.h>
#import <JavaKit/JavaPriorityBlockingQueue.h>
#import <MPDroid/MPDroidCacheDispatcher.h>


@implementation MPDroidRequestQueue


//constructors
@bridge (constructor) initWithCache:network:threadPoolSize:responseDelivery:;
@bridge (constructor) initWithCache:network:threadPoolSize:;
@bridge (constructor) initWithCache:network:;


//properties
@bridge (instance, method) cache = getCache;

@bridge (instance, method) sequenceNumber = getSequenceNumber;



//methods
@bridge (method, instance) start = start;
@bridge (method, instance) stop = stop;
@bridge (method, instance) cancelAll: = cancelAll;
@bridge (method, instance) cancelAll: = cancelAll;
@bridge (method, instance) addWithRequest: = add;


@end
