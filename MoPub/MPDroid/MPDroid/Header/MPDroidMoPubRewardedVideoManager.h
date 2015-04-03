//
//  MPDroidMoPubRewardedVideoManager.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubRewardedVideoManager
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoManager.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdResponse;
@protocol MPDroidMediationSettings;
@protocol MPDroidMoPubRewardedVideoListener;
@class AndroidHandler;
@class MPDroidMoPubErrorCode;
@class AndroidContext;
@class MPDroidVolleyError;
@class JavaWeakReference;
@class MPDroidAdRequestStatusMapping;
@class AndroidActivity;
@protocol JavaSet;
@class MPDroidCustomEventRewardedVideo;
@class MPDroidMoPubReward;
@protocol JavaMap;
@class JavaClass;


//defines and their comments (static fields with values)
#define MPDroidMoPubRewardedVideoManagerDefaultLoadTimeout 30000

/**
Java class: MPDroidMoPubRewardedVideoManager
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubRewardedVideoManager")
@interface MPDroidMoPubRewardedVideoManager : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (void)initializeWithActivity:(AndroidActivity *)mainActivity mediationSettings:(NSArray * BRIDGE_ARRAY(JavaObject <MPDroidMediationSettings>))mediationSettings; /* init */
+ (void)updateActivity:(AndroidActivity *)activity; /* updateActivity */
+ (JavaObject <MPDroidMediationSettings> *)globalMediationSettingsForClass:(JavaClass *)clazz; /* getGlobalMediationSettings */
+ (JavaObject <MPDroidMediationSettings> *)instanceMediationSettingsForClass:(JavaClass *)clazz adUnitId:(NSString *)adUnitId; /* getInstanceMediationSettings */
+ (void)setVideoListenerByMoPubRewardedVideoListener:(JavaObject <MPDroidMoPubRewardedVideoListener> *)listener; /* setVideoListener */
+ (void)loadVideo:(NSString *)adUnitId mediationSettings:(NSArray * BRIDGE_ARRAY(JavaObject <MPDroidMediationSettings>))mediationSettings; /* loadVideo */
+ (BOOL)hasVideo:(NSString *)adUnitId; /* hasVideo */
+ (void)showVideo:(NSString *)adUnitId; /* showVideo */
+ (void)onRewardedVideoLoadSuccess:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId; /* onRewardedVideoLoadSuccess */
+ (void)onRewardedVideoLoadFailure:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onRewardedVideoLoadFailure */
+ (void)onRewardedVideoStarted:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId; /* onRewardedVideoStarted */
+ (void)onRewardedVideoPlaybackError:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onRewardedVideoPlaybackError */
+ (void)onRewardedVideoClicked:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId; /* onRewardedVideoClicked */
+ (void)onRewardedVideoClosed:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId; /* onRewardedVideoClosed */
+ (void)onRewardedVideoCompleted:(JavaClass *)customEventClass thirdPartyId:(NSString *)thirdPartyId moPubReward:(MPDroidMoPubReward *)moPubReward; /* onRewardedVideoCompleted */


@end
