//
//  MPDroidBlockCustomEventBannerCustomEventBannerListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.CustomEventBanner.CustomEventBannerListener
//  See MPDroid/MPDroidBlockCustomEventBannerCustomEventBannerListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCustomEventBannerCustomEventBannerListener.h"
//other required types
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>


@implementation MPDroidBlockCustomEventBannerCustomEventBannerListener

// overrides
- (void)onBannerLoaded:(AndroidView *)bannerView
{
    if (self.onBannerLoadedHandler)
    {
        self.onBannerLoadedHandler(bannerView);
    }
}

- (void)onBannerFailed:(MPDroidMoPubErrorCode *)errorCode
{
    if (self.onBannerFailedHandler)
    {
        self.onBannerFailedHandler(errorCode);
    }
}

- (void)onBannerExpanded
{
    if (self.onBannerExpandedHandler)
    {
        self.onBannerExpandedHandler();
    }
}

- (void)onBannerCollapsed
{
    if (self.onBannerCollapsedHandler)
    {
        self.onBannerCollapsedHandler();
    }
}

- (void)onBannerClicked
{
    if (self.onBannerClickedHandler)
    {
        self.onBannerClickedHandler();
    }
}

- (void)onLeaveApplication
{
    if (self.onLeaveApplicationHandler)
    {
        self.onLeaveApplicationHandler();
    }
}



// bridges
@bridge (callback) onBannerLoaded: = onBannerLoaded;
@bridge (callback) onBannerFailed: = onBannerFailed;
@bridge (callback) onBannerExpanded = onBannerExpanded;
@bridge (callback) onBannerCollapsed = onBannerCollapsed;
@bridge (callback) onBannerClicked = onBannerClicked;
@bridge (callback) onLeaveApplication = onLeaveApplication;


@end
