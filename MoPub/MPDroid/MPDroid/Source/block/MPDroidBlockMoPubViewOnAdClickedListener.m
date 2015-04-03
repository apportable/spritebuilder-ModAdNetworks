//
//  MPDroidBlockMoPubViewOnAdClickedListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdClickedListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdClickedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdClickedListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdClickedListener

// overrides
- (void)OnAdClicked:(MPDroidMoPubView *)moPubViewParam
{
    if (self.OnAdClickedHandler)
    {
        self.OnAdClickedHandler(moPubViewParam);
    }
}



// bridges
@bridge (callback) OnAdClicked: = OnAdClicked;


@end
