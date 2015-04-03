//
//  MPDroidBlockCustomEventNativeImageListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.CustomEventNative.ImageListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.ImageListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventNativeImageListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockCustomEventNativeImageListener")
@interface MPDroidBlockCustomEventNativeImageListener : MPDroidCustomEventNativeImageListener

//methods
- (void)onImagesCached;
- (void)onImagesFailedToCache:(MPDroidNativeErrorCode *)errorCode;


@end
