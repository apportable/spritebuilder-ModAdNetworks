//
//  MPDroidBlockMoPubRewardedVideoListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubRewardedVideoListener
//  See MPDroid/MPDroidBlockMoPubRewardedVideoListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubRewardedVideoListener.h"
//other required types
#import <JavaKit/JavaSet.h>
#import <MPDroid/MPDroidMoPubReward.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>


@implementation MPDroidBlockMoPubRewardedVideoListener

// overrides
- (void)onRewardedVideoLoadSuccess:(NSString *)stringParam
{
    if (self.onRewardedVideoLoadSuccessHandler)
    {
        self.onRewardedVideoLoadSuccessHandler(stringParam);
    }
}

- (void)onRewardedVideoLoadFailure:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam
{
    if (self.onRewardedVideoLoadFailureMoPubErrorCodeHandler)
    {
        self.onRewardedVideoLoadFailureMoPubErrorCodeHandler(stringParam, moPubErrorCodeParam);
    }
}

- (void)onRewardedVideoStarted:(NSString *)stringParam
{
    if (self.onRewardedVideoStartedHandler)
    {
        self.onRewardedVideoStartedHandler(stringParam);
    }
}

- (void)onRewardedVideoPlaybackError:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam
{
    if (self.onRewardedVideoPlaybackErrorMoPubErrorCodeHandler)
    {
        self.onRewardedVideoPlaybackErrorMoPubErrorCodeHandler(stringParam, moPubErrorCodeParam);
    }
}

- (void)onRewardedVideoClosed:(NSString *)stringParam
{
    if (self.onRewardedVideoClosedHandler)
    {
        self.onRewardedVideoClosedHandler(stringParam);
    }
}

- (void)onRewardedVideoCompleted:(JavaObject <JavaSet> *)setParam moPubReward:(MPDroidMoPubReward *)moPubRewardParam
{
    if (self.onRewardedVideoCompletedMoPubRewardHandler)
    {
        self.onRewardedVideoCompletedMoPubRewardHandler(setParam, moPubRewardParam);
    }
}



// bridges
@bridge (callback) onRewardedVideoLoadSuccess: = onRewardedVideoLoadSuccess;
@bridge (callback) onRewardedVideoLoadFailure:moPubErrorCode: = onRewardedVideoLoadFailure;
@bridge (callback) onRewardedVideoStarted: = onRewardedVideoStarted;
@bridge (callback) onRewardedVideoPlaybackError:moPubErrorCode: = onRewardedVideoPlaybackError;
@bridge (callback) onRewardedVideoClosed: = onRewardedVideoClosed;
@bridge (callback) onRewardedVideoCompleted:moPubReward: = onRewardedVideoCompleted;


@end
