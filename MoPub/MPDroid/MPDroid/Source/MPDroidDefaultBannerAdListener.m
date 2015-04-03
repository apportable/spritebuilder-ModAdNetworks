//
//  MPDroidDefaultBannerAdListener.m
// 
//  Bridges to the java object com.mopub.mobileads.DefaultBannerAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/DefaultBannerAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDefaultBannerAdListener.h>
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidDefaultBannerAdListener


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) onBannerLoaded: = onBannerLoaded;
@bridge (method, instance) onBannerFailed:moPubErrorCode: = onBannerFailed;
@bridge (method, instance) onBannerClicked: = onBannerClicked;
@bridge (method, instance) onBannerExpanded: = onBannerExpanded;
@bridge (method, instance) onBannerCollapsed: = onBannerCollapsed;


@end
