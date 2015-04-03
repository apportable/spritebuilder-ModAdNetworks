//
//  MPDroidMoPubReward.m
// 
//  Bridges to the java object com.mopub.common.MoPubReward
//  See http://developer.android.com/reference/com/mopub/common/MoPubReward.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubReward.h>
//other required types


@implementation MPDroidMoPubReward


//constructors


//properties
@bridge (instance, method) isSuccessful = isSuccessful;

@bridge (instance, method) label = getLabel;

@bridge (instance, method) amount = getAmount;



//methods
@bridge (method, static) failure = failure;
@bridge (method, static) successWithRewardLabel:amount: = success;


@end
