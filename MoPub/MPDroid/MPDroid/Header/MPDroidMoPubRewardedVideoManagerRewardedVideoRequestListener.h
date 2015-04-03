//
//  MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubRewardedVideoManager.RewardedVideoRequestListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoManager.RewardedVideoRequestListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidAdRequestListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidMoPubRewardedVideoManager;
@class MPDroidVolleyError;
@class MPDroidAdResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubRewardedVideoManager$RewardedVideoRequestListener")
@interface MPDroidMoPubRewardedVideoManagerRewardedVideoRequestListener : JavaObject <MPDroidAdRequestListener>

// constructors
- (instancetype)initWithMoPubRewardedVideoManager:(MPDroidMoPubRewardedVideoManager *)videoManager adUnitId:(NSString *)adUnitId; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSString *adUnitId; /* adUnitId */


//static valueless fields


// methods
- (void)onSuccess:(MPDroidAdResponse *)response; /* onSuccess */
- (void)onErrorResponse:(MPDroidVolleyError *)volleyError; /* onErrorResponse */


@end
