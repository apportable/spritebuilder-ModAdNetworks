//
//  MPDroidBlockCustomEventBannerCustomEventBannerListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.CustomEventBanner.CustomEventBannerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventBanner.CustomEventBannerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventBannerCustomEventBannerListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockCustomEventBannerCustomEventBannerListener")
@interface MPDroidBlockCustomEventBannerCustomEventBannerListener : MPDroidCustomEventBannerCustomEventBannerListener

//methods
- (void)onBannerLoaded:(AndroidView *)bannerView;
- (void)onBannerFailed:(MPDroidMoPubErrorCode *)errorCode;
- (void)onBannerExpanded;
- (void)onBannerCollapsed;
- (void)onBannerClicked;
- (void)onLeaveApplication;


@end
