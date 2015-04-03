//
//  MPDroidBlockMoPubViewOnAdFailedListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdFailedListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdFailedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdFailedListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdFailedListener

// overrides
- (void)OnAdFailed:(MPDroidMoPubView *)moPubViewParam
{
    if (self.OnAdFailedHandler)
    {
        self.OnAdFailedHandler(moPubViewParam);
    }
}



// bridges
@bridge (callback) OnAdFailed: = OnAdFailed;


@end
