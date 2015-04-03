//
//  MPDroidMoPubEvents.m
// 
//  Bridges to the java object com.mopub.common.event.MoPubEvents
//  See http://developer.android.com/reference/com/mopub/common/event/MoPubEvents.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubEvents.h>
//other required types
#import <MPDroid/MPDroidEventDispatcher.h>
#import <MPDroid/MPDroidBaseEvent.h>


@implementation MPDroidMoPubEvents


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) logWithBaseEvent: = log;
@bridge (method, static) setEventDispatcherByEventDispatcher: = setEventDispatcher;


@end
