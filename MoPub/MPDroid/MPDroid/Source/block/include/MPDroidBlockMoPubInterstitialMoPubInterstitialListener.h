//
//  MPDroidBlockMoPubInterstitialMoPubInterstitialListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubInterstitial.MoPubInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.MoPubInterstitialListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubInterstitialMoPubInterstitialListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubInterstitialMoPubInterstitialListener")
@interface MPDroidBlockMoPubInterstitialMoPubInterstitialListener : MPDroidMoPubInterstitialMoPubInterstitialListener

//methods
- (void)OnInterstitialLoaded;
- (void)OnInterstitialFailed;


@end
