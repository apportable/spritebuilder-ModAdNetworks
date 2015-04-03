//
//  MPDroidCustomEventBannerAdapter.m
// 
//  Bridges to the java object com.mopub.mobileads.CustomEventBannerAdapter
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventBannerAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventBannerAdapter.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidCustomEventBanner.h>
#import <JavaKit/JavaMap.h>
#import <AndroidKit/AndroidContext.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidAdReport.h>


@implementation MPDroidCustomEventBannerAdapter


//constructors
@bridge (constructor) initWithMoPubView:className:map:broadcastIdentifier:adReport:;


//properties


//methods
@bridge (method, instance) onBannerLoaded: = onBannerLoaded;
@bridge (method, instance) onBannerFailed: = onBannerFailed;
@bridge (method, instance) onBannerExpanded = onBannerExpanded;
@bridge (method, instance) onBannerCollapsed = onBannerCollapsed;
@bridge (method, instance) onBannerClicked = onBannerClicked;
@bridge (method, instance) onLeaveApplication = onLeaveApplication;


@end
