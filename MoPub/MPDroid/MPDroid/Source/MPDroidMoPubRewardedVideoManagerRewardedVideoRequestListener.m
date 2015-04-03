//
//  MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubRewardedVideoManager.RewardedVideoRequestListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoManager.RewardedVideoRequestListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidMoPubRewardedVideoManager.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener


//constructors
@bridge (constructor) initWithMoPubRewardedVideoManager:adUnitId:;


//properties
@bridge (field) adUnitId = adUnitId;



//methods
@bridge (method, instance) onSuccess: = onSuccess;
@bridge (method, instance) onErrorResponse: = onErrorResponse;


@end
