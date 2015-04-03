//
//  MPDroidBlockMoPubInterstitialMoPubInterstitialListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubInterstitial.MoPubInterstitialListener
//  See MPDroid/MPDroidBlockMoPubInterstitialMoPubInterstitialListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubInterstitialMoPubInterstitialListener.h"
//other required types


@implementation MPDroidBlockMoPubInterstitialMoPubInterstitialListener

// overrides
- (void)OnInterstitialLoaded
{
    if (self.OnInterstitialLoadedHandler)
    {
        self.OnInterstitialLoadedHandler();
    }
}

- (void)OnInterstitialFailed
{
    if (self.OnInterstitialFailedHandler)
    {
        self.OnInterstitialFailedHandler();
    }
}



// bridges
@bridge (callback) OnInterstitialLoaded = OnInterstitialLoaded;
@bridge (callback) OnInterstitialFailed = OnInterstitialFailed;


@end
