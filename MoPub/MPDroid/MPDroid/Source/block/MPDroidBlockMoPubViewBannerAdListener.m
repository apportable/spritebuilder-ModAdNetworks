//
//  MPDroidBlockMoPubViewBannerAdListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.BannerAdListener
//  See MPDroid/MPDroidBlockMoPubViewBannerAdListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewBannerAdListener.h"
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewBannerAdListener

// overrides
- (void)onBannerLoaded:(MPDroidMoPubView *)banner
{
    if (self.onBannerLoadedHandler)
    {
        self.onBannerLoadedHandler(banner);
    }
}

- (void)onBannerFailed:(MPDroidMoPubView *)banner moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode
{
    if (self.onBannerFailedMoPubErrorCodeHandler)
    {
        self.onBannerFailedMoPubErrorCodeHandler(banner, errorCode);
    }
}

- (void)onBannerClicked:(MPDroidMoPubView *)banner
{
    if (self.onBannerClickedHandler)
    {
        self.onBannerClickedHandler(banner);
    }
}

- (void)onBannerExpanded:(MPDroidMoPubView *)banner
{
    if (self.onBannerExpandedHandler)
    {
        self.onBannerExpandedHandler(banner);
    }
}

- (void)onBannerCollapsed:(MPDroidMoPubView *)banner
{
    if (self.onBannerCollapsedHandler)
    {
        self.onBannerCollapsedHandler(banner);
    }
}



// bridges
@bridge (callback) onBannerLoaded: = onBannerLoaded;
@bridge (callback) onBannerFailed:moPubErrorCode: = onBannerFailed;
@bridge (callback) onBannerClicked: = onBannerClicked;
@bridge (callback) onBannerExpanded: = onBannerExpanded;
@bridge (callback) onBannerCollapsed: = onBannerCollapsed;


@end
