//
//  MPDroidMoPub.h
// 
//  Bridges to the java object com.mopub.common.MoPub
//  See http://developer.android.com/reference/com/mopub/common/MoPub.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMoPubRewardedVideoListener;
@class AndroidActivity;
@protocol MPDroidMediationSettings;
@class MPDroidMoPubLocationAwareness;


//defines and their comments (static fields with values)
#define MPDroidMoPubSdkVersion @"3.5.0"
#define MPDroidMoPubDefaultLocationPrecision 6

/**
Java class: MPDroidMoPub
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.MoPub")
@interface MPDroidMoPub : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidMoPubLocationAwareness *)locationAwareness; /* getLocationAwareness */
+ (void)setLocationAwarenessByLocationAwareness:(MPDroidMoPubLocationAwareness *)locationAwareness; /* setLocationAwareness */
+ (int32_t)locationPrecision; /* getLocationPrecision */
+ (void)setLocationPrecisionByPrecision:(int32_t)precision; /* setLocationPrecision */
+ (void)onCreate:(AndroidActivity *)activity; /* onCreate */
+ (void)onStart:(AndroidActivity *)activity; /* onStart */
+ (void)onPause:(AndroidActivity *)activity; /* onPause */
+ (void)onResume:(AndroidActivity *)activity; /* onResume */
+ (void)onRestart:(AndroidActivity *)activity; /* onRestart */
+ (void)onStop:(AndroidActivity *)activity; /* onStop */
+ (void)onDestroy:(AndroidActivity *)activity; /* onDestroy */
+ (void)onBackPressed:(AndroidActivity *)activity; /* onBackPressed */
+ (void)initializeRewardedVideo:(AndroidActivity *)activity mediationSettings:(NSArray * BRIDGE_ARRAY(JavaObject <MPDroidMediationSettings>))mediationSettings; /* initializeRewardedVideo */
+ (void)setRewardedVideoListenerByMoPubRewardedVideoListener:(JavaObject <MPDroidMoPubRewardedVideoListener> *)listener; /* setRewardedVideoListener */
+ (void)loadRewardedVideo:(NSString *)adUnitId mediationSettings:(NSArray * BRIDGE_ARRAY(JavaObject <MPDroidMediationSettings>))mediationSettings; /* loadRewardedVideo */
+ (BOOL)hasRewardedVideo:(NSString *)adUnitId; /* hasRewardedVideo */
+ (void)showRewardedVideo:(NSString *)adUnitId; /* showRewardedVideo */


@end
