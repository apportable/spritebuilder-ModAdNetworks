//
//  MPDroidBlockMoPubInterstitialInterstitialAdListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubInterstitial.InterstitialAdListener
//  See MPDroid/MPDroidBlockMoPubInterstitialInterstitialAdListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubInterstitialInterstitialAdListener.h"
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubInterstitial.h>


@implementation MPDroidBlockMoPubInterstitialInterstitialAdListener

// overrides
- (void)onInterstitialLoaded:(MPDroidMoPubInterstitial *)interstitial
{
    if (self.onInterstitialLoadedHandler)
    {
        self.onInterstitialLoadedHandler(interstitial);
    }
}

- (void)onInterstitialFailed:(MPDroidMoPubInterstitial *)interstitial moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode
{
    if (self.onInterstitialFailedMoPubErrorCodeHandler)
    {
        self.onInterstitialFailedMoPubErrorCodeHandler(interstitial, errorCode);
    }
}

- (void)onInterstitialShown:(MPDroidMoPubInterstitial *)interstitial
{
    if (self.onInterstitialShownHandler)
    {
        self.onInterstitialShownHandler(interstitial);
    }
}

- (void)onInterstitialClicked:(MPDroidMoPubInterstitial *)interstitial
{
    if (self.onInterstitialClickedHandler)
    {
        self.onInterstitialClickedHandler(interstitial);
    }
}

- (void)onInterstitialDismissed:(MPDroidMoPubInterstitial *)interstitial
{
    if (self.onInterstitialDismissedHandler)
    {
        self.onInterstitialDismissedHandler(interstitial);
    }
}



// bridges
@bridge (callback) onInterstitialLoaded: = onInterstitialLoaded;
@bridge (callback) onInterstitialFailed:moPubErrorCode: = onInterstitialFailed;
@bridge (callback) onInterstitialShown: = onInterstitialShown;
@bridge (callback) onInterstitialClicked: = onInterstitialClicked;
@bridge (callback) onInterstitialDismissed: = onInterstitialDismissed;


@end
