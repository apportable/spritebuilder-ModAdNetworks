//
//  MPDroidMoPubRewardedVideoManager.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubRewardedVideoManager
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoManager.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubRewardedVideoManager.h>
//other required types
#import <MPDroid/MPDroidAdResponse.h>
#import <MPDroid/MPDroidMediationSettings.h>
#import <MPDroid/MPDroidMoPubRewardedVideoListener.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <JavaKit/JavaWeakReference.h>
#import <MPDroid/MPDroidAdRequestStatusMapping.h>
#import <AndroidKit/AndroidActivity.h>
#import <JavaKit/JavaSet.h>
#import <MPDroid/MPDroidCustomEventRewardedVideo.h>
#import <MPDroid/MPDroidMoPubReward.h>
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaClass.h>


@implementation MPDroidMoPubRewardedVideoManager


//constructors


//properties


//methods
@bridge (method, static) initializeWithActivity:mediationSettings: = init;
@bridge (method, static) updateActivity: = updateActivity;
@bridge (method, static) globalMediationSettingsForClass: = getGlobalMediationSettings;
@bridge (method, static) instanceMediationSettingsForClass:adUnitId: = getInstanceMediationSettings;
@bridge (method, static) setVideoListenerByMoPubRewardedVideoListener: = setVideoListener;
@bridge (method, static) loadVideo:mediationSettings: = loadVideo;
@bridge (method, static) hasVideo: = hasVideo;
@bridge (method, static) showVideo: = showVideo;
@bridge (method, static) onRewardedVideoLoadSuccess:thirdPartyId: = onRewardedVideoLoadSuccess;
@bridge (method, static) onRewardedVideoLoadFailure:thirdPartyId:moPubErrorCode: = onRewardedVideoLoadFailure;
@bridge (method, static) onRewardedVideoStarted:thirdPartyId: = onRewardedVideoStarted;
@bridge (method, static) onRewardedVideoPlaybackError:thirdPartyId:moPubErrorCode: = onRewardedVideoPlaybackError;
@bridge (method, static) onRewardedVideoClicked:thirdPartyId: = onRewardedVideoClicked;
@bridge (method, static) onRewardedVideoClosed:thirdPartyId: = onRewardedVideoClosed;
@bridge (method, static) onRewardedVideoCompleted:thirdPartyId:moPubReward: = onRewardedVideoCompleted;


@end
