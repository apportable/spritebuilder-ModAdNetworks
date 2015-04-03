//
//  MPDroidBlockMoPubNativeMoPubNativeNetworkListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeNetworkListener
//  See MPDroid/MPDroidBlockMoPubNativeMoPubNativeNetworkListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubNativeMoPubNativeNetworkListener.h"
//other required types
#import <MPDroid/MPDroidNativeResponse.h>
#import <MPDroid/MPDroidNativeErrorCode.h>


@implementation MPDroidBlockMoPubNativeMoPubNativeNetworkListener

// overrides
- (void)onNativeLoad:(MPDroidNativeResponse *)nativeResponse
{
    if (self.onNativeLoadHandler)
    {
        self.onNativeLoadHandler(nativeResponse);
    }
}

- (void)onNativeFail:(MPDroidNativeErrorCode *)errorCode
{
    if (self.onNativeFailHandler)
    {
        self.onNativeFailHandler(errorCode);
    }
}



// bridges
@bridge (callback) onNativeLoad: = onNativeLoad;
@bridge (callback) onNativeFail: = onNativeFail;


@end
