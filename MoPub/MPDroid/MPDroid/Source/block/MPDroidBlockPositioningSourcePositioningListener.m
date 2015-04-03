//
//  MPDroidBlockPositioningSourcePositioningListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.PositioningSource.PositioningListener
//  See MPDroid/MPDroidBlockPositioningSourcePositioningListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockPositioningSourcePositioningListener.h"
//other required types
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h>


@implementation MPDroidBlockPositioningSourcePositioningListener

// overrides
- (void)onLoad:(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)positioning
{
    if (self.onLoadHandler)
    {
        self.onLoadHandler(positioning);
    }
}

- (void)onFailed
{
    if (self.onFailedHandler)
    {
        self.onFailedHandler();
    }
}



// bridges
@bridge (callback) onLoad: = onLoad;
@bridge (callback) onFailed = onFailed;


@end
