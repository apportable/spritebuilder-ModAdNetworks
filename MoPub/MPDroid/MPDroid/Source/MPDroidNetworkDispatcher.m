//
//  MPDroidNetworkDispatcher.m
// 
//  Bridges to the java object com.mopub.volley.NetworkDispatcher
//  See http://developer.android.com/reference/com/mopub/volley/NetworkDispatcher.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNetworkDispatcher.h>
//other required types
#import <MPDroid/MPDroidRequest.h>
#import <JavaKit/JavaBlockingQueue.h>
#import <MPDroid/MPDroidNetwork.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidResponseDelivery.h>
#import <MPDroid/MPDroidCache.h>


@implementation MPDroidNetworkDispatcher


//constructors
@bridge (constructor) initWithBlockingQueue:network:cache:responseDelivery:;


//properties


//methods
@bridge (method, instance) quit = quit;
@bridge (method, instance) run = run;


@end
