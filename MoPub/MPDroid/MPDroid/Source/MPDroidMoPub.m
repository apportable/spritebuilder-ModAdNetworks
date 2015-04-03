//
//  MPDroidMoPub.m
// 
//  Bridges to the java object com.mopub.common.MoPub
//  See http://developer.android.com/reference/com/mopub/common/MoPub.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPub.h>
//other required types
#import <MPDroid/MPDroidMoPubRewardedVideoListener.h>
#import <AndroidKit/AndroidActivity.h>
#import <MPDroid/MPDroidMediationSettings.h>
#import <MPDroid/MPDroidMoPubLocationAwareness.h>


@implementation MPDroidMoPub


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) locationAwareness = getLocationAwareness;
@bridge (method, static) setLocationAwarenessByLocationAwareness: = setLocationAwareness;
@bridge (method, static) locationPrecision = getLocationPrecision;
@bridge (method, static) setLocationPrecisionByPrecision: = setLocationPrecision;
@bridge (method, static) onCreate: = onCreate;
@bridge (method, static) onStart: = onStart;
@bridge (method, static) onPause: = onPause;
@bridge (method, static) onResume: = onResume;
@bridge (method, static) onRestart: = onRestart;
@bridge (method, static) onStop: = onStop;
@bridge (method, static) onDestroy: = onDestroy;
@bridge (method, static) onBackPressed: = onBackPressed;
@bridge (method, static) initializeRewardedVideo:mediationSettings: = initializeRewardedVideo;
@bridge (method, static) setRewardedVideoListenerByMoPubRewardedVideoListener: = setRewardedVideoListener;
@bridge (method, static) loadRewardedVideo:mediationSettings: = loadRewardedVideo;
@bridge (method, static) hasRewardedVideo: = hasRewardedVideo;
@bridge (method, static) showRewardedVideo: = showRewardedVideo;


@end
