//
//  MPDroidBlockMoPubNativeAdLoadedListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.MoPubNativeAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdLoadedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNativeAdLoadedListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubNativeAdLoadedListener")
@interface MPDroidBlockMoPubNativeAdLoadedListener : MPDroidMoPubNativeAdLoadedListener

//methods
- (void)onAdLoaded:(int32_t)position;
- (void)onAdRemoved:(int32_t)position;


@end
