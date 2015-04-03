//
//  MPDroidBlockCustomEventNativeImageListener.m
//
//  A block-based way adapt to the java interface com.mopub.nativeads.CustomEventNative.ImageListener
//  See MPDroid/MPDroidBlockCustomEventNativeImageListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCustomEventNativeImageListener.h"
//other required types
#import <MPDroid/MPDroidNativeErrorCode.h>


@implementation MPDroidBlockCustomEventNativeImageListener

// overrides
- (void)onImagesCached
{
    if (self.onImagesCachedHandler)
    {
        self.onImagesCachedHandler();
    }
}

- (void)onImagesFailedToCache:(MPDroidNativeErrorCode *)errorCode
{
    if (self.onImagesFailedToCacheHandler)
    {
        self.onImagesFailedToCacheHandler(errorCode);
    }
}



// bridges
@bridge (callback) onImagesCached = onImagesCached;
@bridge (callback) onImagesFailedToCache: = onImagesFailedToCache;


@end
