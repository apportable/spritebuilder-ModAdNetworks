//
//  MPDroidBlockMoPubNativeMoPubNativeEventListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeEventListener
//  See MPDroid/MPDroidBlockMoPubNativeMoPubNativeEventListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubNativeMoPubNativeEventListener.h"
//other required types
#import <AndroidKit/AndroidView.h>


@implementation MPDroidBlockMoPubNativeMoPubNativeEventListener

// overrides
- (void)onNativeImpression:(AndroidView *)view
{
    if (self.onNativeImpressionHandler)
    {
        self.onNativeImpressionHandler(view);
    }
}

- (void)onNativeClick:(AndroidView *)view
{
    if (self.onNativeClickHandler)
    {
        self.onNativeClickHandler(view);
    }
}



// bridges
@bridge (callback) onNativeImpression: = onNativeImpression;
@bridge (callback) onNativeClick: = onNativeClick;


@end
