//
//  MPDroidBlockMoPubInterstitialInterstitialAdListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubInterstitial.InterstitialAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.InterstitialAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubInterstitialInterstitialAdListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubInterstitialInterstitialAdListener")
@interface MPDroidBlockMoPubInterstitialInterstitialAdListener : MPDroidMoPubInterstitialInterstitialAdListener

//methods
- (void)onInterstitialLoaded:(MPDroidMoPubInterstitial *)interstitial;
- (void)onInterstitialFailed:(MPDroidMoPubInterstitial *)interstitial moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode;
- (void)onInterstitialShown:(MPDroidMoPubInterstitial *)interstitial;
- (void)onInterstitialClicked:(MPDroidMoPubInterstitial *)interstitial;
- (void)onInterstitialDismissed:(MPDroidMoPubInterstitial *)interstitial;


@end
