//
//  MPDroidBlockPositioningSourcePositioningListener.h
//
//  A block-based way adapt to the java interface com.mopub.nativeads.PositioningSource.PositioningListener
//  See http://developer.android.com/reference/com/mopub/nativeads/PositioningSource.PositioningListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidPositioningSourcePositioningListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockPositioningSourcePositioningListener")
@interface MPDroidBlockPositioningSourcePositioningListener : MPDroidPositioningSourcePositioningListener

//methods
- (void)onLoad:(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)positioning;
- (void)onFailed;


@end
