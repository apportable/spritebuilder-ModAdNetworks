//
//  MPDroidBlockCustomEventNativeCustomEventNativeListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.CustomEventNative.CustomEventNativeListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.CustomEventNativeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCustomEventNativeCustomEventNativeListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockCustomEventNativeCustomEventNativeListener")
@interface MPDroidBlockCustomEventNativeCustomEventNativeListener : MPDroidCustomEventNativeCustomEventNativeListener

//methods
- (void)onNativeAdFailed:(MPDroidNativeErrorCode *)errorCode;


@end
