//
//  MPDroidBlockMoPubViewOnAdClosedListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdClosedListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdClosedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdClosedListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdClosedListener

// overrides
- (void)OnAdClosed:(MPDroidMoPubView *)moPubViewParam
{
    if (self.OnAdClosedHandler)
    {
        self.OnAdClosedHandler(moPubViewParam);
    }
}



// bridges
@bridge (callback) OnAdClosed: = OnAdClosed;


@end
