//
//  MPDroidBlockMoPubViewOnAdPresentedOverlayListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdPresentedOverlayListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdPresentedOverlayListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdPresentedOverlayListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdPresentedOverlayListener

// overrides
- (void)OnAdPresentedOverlay:(MPDroidMoPubView *)moPubViewParam
{
    if (self.OnAdPresentedOverlayHandler)
    {
        self.OnAdPresentedOverlayHandler(moPubViewParam);
    }
}



// bridges
@bridge (callback) OnAdPresentedOverlay: = OnAdPresentedOverlay;


@end
