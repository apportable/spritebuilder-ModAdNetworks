//
//  MPDroidMoPubRewardedVideoListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubRewardedVideoListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubRewardedVideoListener.h>
//other required types
#import <JavaKit/JavaSet.h>
#import <MPDroid/MPDroidMoPubReward.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import "block/include/MPDroidBlockMoPubRewardedVideoListener.h"


@implementation MPDroidMoPubRewardedVideoListener

//properties
@bridge (method, instance) onRewardedVideoClosed: = onRewardedVideoClosed;
@bridge (method, instance) onRewardedVideoCompleted:moPubReward: = onRewardedVideoCompleted;
@bridge (method, instance) onRewardedVideoLoadFailure:moPubErrorCode: = onRewardedVideoLoadFailure;
@bridge (method, instance) onRewardedVideoLoadSuccess: = onRewardedVideoLoadSuccess;
@bridge (method, instance) onRewardedVideoPlaybackError:moPubErrorCode: = onRewardedVideoPlaybackError;
@bridge (method, instance) onRewardedVideoStarted: = onRewardedVideoStarted;


//methods


//convenience class method
+ (MPDroidMoPubRewardedVideoListener *)listener
{
    return [[[MPDroidBlockMoPubRewardedVideoListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onRewardedVideoLoadSuccessHandler != nil)
    {
        Block_release(_onRewardedVideoLoadSuccessHandler);
        _onRewardedVideoLoadSuccessHandler = nil;
    }
    if (_onRewardedVideoLoadFailureMoPubErrorCodeHandler != nil)
    {
        Block_release(_onRewardedVideoLoadFailureMoPubErrorCodeHandler);
        _onRewardedVideoLoadFailureMoPubErrorCodeHandler = nil;
    }
    if (_onRewardedVideoStartedHandler != nil)
    {
        Block_release(_onRewardedVideoStartedHandler);
        _onRewardedVideoStartedHandler = nil;
    }
    if (_onRewardedVideoPlaybackErrorMoPubErrorCodeHandler != nil)
    {
        Block_release(_onRewardedVideoPlaybackErrorMoPubErrorCodeHandler);
        _onRewardedVideoPlaybackErrorMoPubErrorCodeHandler = nil;
    }
    if (_onRewardedVideoClosedHandler != nil)
    {
        Block_release(_onRewardedVideoClosedHandler);
        _onRewardedVideoClosedHandler = nil;
    }
    if (_onRewardedVideoCompletedMoPubRewardHandler != nil)
    {
        Block_release(_onRewardedVideoCompletedMoPubRewardHandler);
        _onRewardedVideoCompletedMoPubRewardHandler = nil;
    }
    [super dealloc];
}


@end
