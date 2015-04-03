//
//  MPDroidBlockMoPubNativeMoPubNativeEventListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeEventListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeEventListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNativeMoPubNativeEventListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubNativeMoPubNativeEventListener")
@interface MPDroidBlockMoPubNativeMoPubNativeEventListener : MPDroidMoPubNativeMoPubNativeEventListener

//methods
- (void)onNativeImpression:(AndroidView *)view;
- (void)onNativeClick:(AndroidView *)view;


@end
