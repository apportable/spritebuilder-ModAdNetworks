//
//  MPDroidBlockMoPubViewOnAdLoadedListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdLoadedListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdLoadedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdLoadedListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdLoadedListener

// overrides
- (void)OnAdLoaded:(MPDroidMoPubView *)moPubViewParam
{
    if (self.OnAdLoadedHandler)
    {
        self.OnAdLoadedHandler(moPubViewParam);
    }
}



// bridges
@bridge (callback) OnAdLoaded: = OnAdLoaded;


@end
