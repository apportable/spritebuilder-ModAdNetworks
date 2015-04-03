//
//  MPDroidBlockMoPubViewOnAdWillLoadListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdWillLoadListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdWillLoadListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubViewOnAdWillLoadListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubViewOnAdWillLoadListener")
@interface MPDroidBlockMoPubViewOnAdWillLoadListener : MPDroidMoPubViewOnAdWillLoadListener

//methods
- (void)OnAdWillLoad:(MPDroidMoPubView *)moPubViewParam stringParam:(NSString *)stringParam;


@end
