//
//  MPDroidVastManager.m
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastManager
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastManager.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastManager.h>
//other required types
#import <JavaKit/JavaList.h>
#import <MPDroid/MPDroidVastXmlManagerAggregator.h>
#import <MPDroid/MPDroidVastManagerVastManagerListener.h>
#import <MPDroid/MPDroidVastCompanionAd.h>
#import <MPDroid/MPDroidVastVideoConfiguration.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidVastManager


//constructors
@bridge (constructor) initWithContext:;


//properties


//methods
@bridge (method, instance) prepareVastVideoConfiguration:vastManagerListener: = prepareVastVideoConfiguration;
@bridge (method, instance) cancel = cancel;
@bridge (method, instance) onAggregationComplete: = onAggregationComplete;


@end
