//
//  MPDroidVastCompanionAd.m
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastCompanionAd
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastCompanionAd.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastCompanionAd.h>
//other required types
#import <JavaKit/JavaInteger.h>
#import <JavaKit/JavaList.h>
#import <JavaKit/JavaArrayList.h>


@implementation MPDroidVastCompanionAd


//constructors
@bridge (constructor) initWithInteger:integer:imageUrl:clickThroughUrl:arrayList:;


//properties
@bridge (instance, method) clickTrackers = getClickTrackers;

@bridge (instance, method) imageUrl = getImageUrl;

@bridge (instance, method) width = getWidth;

@bridge (instance, method) height = getHeight;

@bridge (instance, method) clickThroughUrl = getClickThroughUrl;



//methods


@end
