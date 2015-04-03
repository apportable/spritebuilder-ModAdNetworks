//
//  MPDroidCustomEventNativeImageListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.CustomEventNative.ImageListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.ImageListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCustomEventNativeImageListener.h>
//other required types
#import <MPDroid/MPDroidNativeErrorCode.h>
#import "block/include/MPDroidBlockCustomEventNativeImageListener.h"


@implementation MPDroidCustomEventNativeImageListener

//properties
@bridge (method, instance) onImagesCached = onImagesCached;
@bridge (method, instance) onImagesFailedToCache: = onImagesFailedToCache;


//methods


//convenience class method
+ (MPDroidCustomEventNativeImageListener *)listener
{
    return [[[MPDroidBlockCustomEventNativeImageListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onImagesCachedHandler != nil)
    {
        Block_release(_onImagesCachedHandler);
        _onImagesCachedHandler = nil;
    }
    if (_onImagesFailedToCacheHandler != nil)
    {
        Block_release(_onImagesFailedToCacheHandler);
        _onImagesFailedToCacheHandler = nil;
    }
    [super dealloc];
}


@end
