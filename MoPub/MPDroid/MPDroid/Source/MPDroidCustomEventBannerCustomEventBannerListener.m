//
//  MPDroidCustomEventBannerCustomEventBannerListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.CustomEventBanner.CustomEventBannerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventBanner.CustomEventBannerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCustomEventBannerCustomEventBannerListener.h>
//other required types
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import "block/include/MPDroidBlockCustomEventBannerCustomEventBannerListener.h"


@implementation MPDroidCustomEventBannerCustomEventBannerListener

//properties
@bridge (method, instance) onBannerClicked = onBannerClicked;
@bridge (method, instance) onBannerCollapsed = onBannerCollapsed;
@bridge (method, instance) onBannerExpanded = onBannerExpanded;
@bridge (method, instance) onBannerFailed: = onBannerFailed;
@bridge (method, instance) onBannerLoaded: = onBannerLoaded;
@bridge (method, instance) onLeaveApplication = onLeaveApplication;


//methods


//convenience class method
+ (MPDroidCustomEventBannerCustomEventBannerListener *)listener
{
    return [[[MPDroidBlockCustomEventBannerCustomEventBannerListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onBannerLoadedHandler != nil)
    {
        Block_release(_onBannerLoadedHandler);
        _onBannerLoadedHandler = nil;
    }
    if (_onBannerFailedHandler != nil)
    {
        Block_release(_onBannerFailedHandler);
        _onBannerFailedHandler = nil;
    }
    if (_onBannerExpandedHandler != nil)
    {
        Block_release(_onBannerExpandedHandler);
        _onBannerExpandedHandler = nil;
    }
    if (_onBannerCollapsedHandler != nil)
    {
        Block_release(_onBannerCollapsedHandler);
        _onBannerCollapsedHandler = nil;
    }
    if (_onBannerClickedHandler != nil)
    {
        Block_release(_onBannerClickedHandler);
        _onBannerClickedHandler = nil;
    }
    if (_onLeaveApplicationHandler != nil)
    {
        Block_release(_onLeaveApplicationHandler);
        _onLeaveApplicationHandler = nil;
    }
    [super dealloc];
}


@end
