//
//  MPDroidBlockMoPubNativeMoPubNativeNetworkListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeNetworkListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeNetworkListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNativeMoPubNativeNetworkListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubNativeMoPubNativeNetworkListener")
@interface MPDroidBlockMoPubNativeMoPubNativeNetworkListener : MPDroidMoPubNativeMoPubNativeNetworkListener

//methods
- (void)onNativeLoad:(MPDroidNativeResponse *)nativeResponse;
- (void)onNativeFail:(MPDroidNativeErrorCode *)errorCode;


@end
