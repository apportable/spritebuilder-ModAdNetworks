//
//  MPDroidBlockMoPubViewOnAdLoadedListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdLoadedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubViewOnAdLoadedListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubViewOnAdLoadedListener")
@interface MPDroidBlockMoPubViewOnAdLoadedListener : MPDroidMoPubViewOnAdLoadedListener

//methods
- (void)OnAdLoaded:(MPDroidMoPubView *)moPubViewParam;


@end
