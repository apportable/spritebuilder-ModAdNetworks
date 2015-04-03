//
//  MPDroidVastVideoConfiguration.m
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastVideoConfiguration
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastVideoConfiguration.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastVideoConfiguration.h>
//other required types
#import <JavaKit/JavaArrayList.h>
#import <JavaKit/JavaList.h>
#import <MPDroid/MPDroidVastCompanionAd.h>


@implementation MPDroidVastVideoConfiguration


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) networkMediaFileUrl = getNetworkMediaFileUrl;
@bridge (instance, method) setNetworkMediaFileUrl: = setNetworkMediaFileUrl;
@bridge (instance, method) clickThroughUrl = getClickThroughUrl;
@bridge (instance, method) setClickThroughUrl: = setClickThroughUrl;
@bridge (instance, method) clickTrackers = getClickTrackers;

@bridge (instance, method) thirdQuartileTrackers = getThirdQuartileTrackers;

@bridge (instance, method) midpointTrackers = getMidpointTrackers;

@bridge (instance, method) vastCompanionAd = getVastCompanionAd;
@bridge (instance, method) setVastCompanionAd: = setVastCompanionAd;
@bridge (instance, method) startTrackers = getStartTrackers;

@bridge (instance, method) impressionTrackers = getImpressionTrackers;

@bridge (instance, method) completeTrackers = getCompleteTrackers;

@bridge (instance, method) firstQuartileTrackers = getFirstQuartileTrackers;

@bridge (instance, method) diskMediaFileUrl = getDiskMediaFileUrl;
@bridge (instance, method) setDiskMediaFileUrl: = setDiskMediaFileUrl;


//methods
@bridge (method, instance) addImpressionTrackers: = addImpressionTrackers;
@bridge (method, instance) addStartTrackers: = addStartTrackers;
@bridge (method, instance) addFirstQuartileTrackers: = addFirstQuartileTrackers;
@bridge (method, instance) addMidpointTrackers: = addMidpointTrackers;
@bridge (method, instance) addThirdQuartileTrackers: = addThirdQuartileTrackers;
@bridge (method, instance) addCompleteTrackers: = addCompleteTrackers;
@bridge (method, instance) addClickTrackers: = addClickTrackers;


@end
