//
//  MPDroidBlockMoPubNativeAdLoadedListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNativeAdLoadedListener
//  See MPDroid/MPDroidBlockMoPubNativeAdLoadedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubNativeAdLoadedListener.h"
//other required types


@implementation MPDroidBlockMoPubNativeAdLoadedListener

// overrides
- (void)onAdLoaded:(int32_t)position
{
    if (self.onAdLoadedHandler)
    {
        self.onAdLoadedHandler(position);
    }
}

- (void)onAdRemoved:(int32_t)position
{
    if (self.onAdRemovedHandler)
    {
        self.onAdRemovedHandler(position);
    }
}



// bridges
@bridge (callback) onAdLoaded: = onAdLoaded;
@bridge (callback) onAdRemoved: = onAdRemoved;


@end
