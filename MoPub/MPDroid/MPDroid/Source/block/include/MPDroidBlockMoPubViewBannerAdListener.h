//
//  MPDroidBlockMoPubViewBannerAdListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.BannerAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.BannerAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubViewBannerAdListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubViewBannerAdListener")
@interface MPDroidBlockMoPubViewBannerAdListener : MPDroidMoPubViewBannerAdListener

//methods
- (void)onBannerLoaded:(MPDroidMoPubView *)banner;
- (void)onBannerFailed:(MPDroidMoPubView *)banner moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode;
- (void)onBannerClicked:(MPDroidMoPubView *)banner;
- (void)onBannerExpanded:(MPDroidMoPubView *)banner;
- (void)onBannerCollapsed:(MPDroidMoPubView *)banner;


@end
