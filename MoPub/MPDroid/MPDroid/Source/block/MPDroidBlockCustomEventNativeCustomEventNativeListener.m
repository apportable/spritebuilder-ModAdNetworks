//
//  MPDroidBlockCustomEventNativeCustomEventNativeListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.CustomEventNative.CustomEventNativeListener
//  See MPDroid/MPDroidBlockCustomEventNativeCustomEventNativeListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCustomEventNativeCustomEventNativeListener.h"
//other required types
#import <MPDroid/MPDroidNativeErrorCode.h>


@implementation MPDroidBlockCustomEventNativeCustomEventNativeListener

// overrides
- (void)onNativeAdFailed:(MPDroidNativeErrorCode *)errorCode
{
    if (self.onNativeAdFailedHandler)
    {
        self.onNativeAdFailedHandler(errorCode);
    }
}



// bridges
@bridge (callback) onNativeAdFailed: = onNativeAdFailed;


@end
