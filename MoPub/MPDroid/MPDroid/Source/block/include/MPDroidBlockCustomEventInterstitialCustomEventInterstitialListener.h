//
//  MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.CustomEventInterstitial.CustomEventInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventInterstitial.CustomEventInterstitialListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener")
@interface MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener : MPDroidCustomEventInterstitialCustomEventInterstitialListener

//methods
- (void)onInterstitialLoaded;
- (void)onInterstitialFailed:(MPDroidMoPubErrorCode *)errorCode;
- (void)onInterstitialShown;
- (void)onInterstitialClicked;
- (void)onLeaveApplication;
- (void)onInterstitialDismissed;


@end
