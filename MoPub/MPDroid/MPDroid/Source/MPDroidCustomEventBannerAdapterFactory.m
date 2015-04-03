//
//  MPDroidCustomEventBannerAdapterFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventBannerAdapterFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventBannerAdapterFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventBannerAdapterFactory.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidMoPubView.h>
#import <MPDroid/MPDroidCustomEventBannerAdapter.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidCustomEventBannerAdapterFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithMoPubView:className:map:broadcastIdentifier:adReport: = create;


@end
