//
//  MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.CustomEventInterstitial.CustomEventInterstitialListener
//  See MPDroid/MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener.h"
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>


@implementation MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener

// overrides
- (void)onInterstitialLoaded
{
    if (self.onInterstitialLoadedHandler)
    {
        self.onInterstitialLoadedHandler();
    }
}

- (void)onInterstitialFailed:(MPDroidMoPubErrorCode *)errorCode
{
    if (self.onInterstitialFailedHandler)
    {
        self.onInterstitialFailedHandler(errorCode);
    }
}

- (void)onInterstitialShown
{
    if (self.onInterstitialShownHandler)
    {
        self.onInterstitialShownHandler();
    }
}

- (void)onInterstitialClicked
{
    if (self.onInterstitialClickedHandler)
    {
        self.onInterstitialClickedHandler();
    }
}

- (void)onLeaveApplication
{
    if (self.onLeaveApplicationHandler)
    {
        self.onLeaveApplicationHandler();
    }
}

- (void)onInterstitialDismissed
{
    if (self.onInterstitialDismissedHandler)
    {
        self.onInterstitialDismissedHandler();
    }
}



// bridges
@bridge (callback) onInterstitialLoaded = onInterstitialLoaded;
@bridge (callback) onInterstitialFailed: = onInterstitialFailed;
@bridge (callback) onInterstitialShown = onInterstitialShown;
@bridge (callback) onInterstitialClicked = onInterstitialClicked;
@bridge (callback) onLeaveApplication = onLeaveApplication;
@bridge (callback) onInterstitialDismissed = onInterstitialDismissed;


@end
