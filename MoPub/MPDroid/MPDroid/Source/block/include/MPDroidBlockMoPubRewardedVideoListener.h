//
//  MPDroidBlockMoPubRewardedVideoListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubRewardedVideoListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubRewardedVideoListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMoPubRewardedVideoListener")
@interface MPDroidBlockMoPubRewardedVideoListener : MPDroidMoPubRewardedVideoListener

//methods
- (void)onRewardedVideoLoadSuccess:(NSString *)stringParam;
- (void)onRewardedVideoLoadFailure:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam;
- (void)onRewardedVideoStarted:(NSString *)stringParam;
- (void)onRewardedVideoPlaybackError:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam;
- (void)onRewardedVideoClosed:(NSString *)stringParam;
- (void)onRewardedVideoCompleted:(JavaObject <JavaSet> *)setParam moPubReward:(MPDroidMoPubReward *)moPubRewardParam;


@end
