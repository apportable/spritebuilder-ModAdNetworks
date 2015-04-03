//
//  MPDroidMoPubRewardedVideoListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubRewardedVideoListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubRewardedVideoListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaSet;
@class MPDroidMoPubReward;
@class MPDroidMoPubErrorCode;


//static fields


/**
Java interface: MPDroidMoPubRewardedVideoListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubRewardedVideoListener")
@protocol MPDroidMoPubRewardedVideoListener 

// properties


// methods
- (void)onRewardedVideoLoadSuccess:(NSString *)stringParam; /* onRewardedVideoLoadSuccess */
- (void)onRewardedVideoLoadFailure:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam; /* onRewardedVideoLoadFailure */
- (void)onRewardedVideoStarted:(NSString *)stringParam; /* onRewardedVideoStarted */
- (void)onRewardedVideoPlaybackError:(NSString *)stringParam moPubErrorCode:(MPDroidMoPubErrorCode *)moPubErrorCodeParam; /* onRewardedVideoPlaybackError */
- (void)onRewardedVideoClosed:(NSString *)stringParam; /* onRewardedVideoClosed */
- (void)onRewardedVideoCompleted:(JavaObject <JavaSet> *)setParam moPubReward:(MPDroidMoPubReward *)moPubRewardParam; /* onRewardedVideoCompleted */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubRewardedVideoListener")
@interface MPDroidMoPubRewardedVideoListener : JavaObject <MPDroidMoPubRewardedVideoListener>

//properties for handlers
@property (nonatomic, copy) void (^onRewardedVideoLoadSuccessHandler)(NSString *);
@property (nonatomic, copy) void (^onRewardedVideoLoadFailureMoPubErrorCodeHandler)(NSString *, MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onRewardedVideoStartedHandler)(NSString *);
@property (nonatomic, copy) void (^onRewardedVideoPlaybackErrorMoPubErrorCodeHandler)(NSString *, MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onRewardedVideoClosedHandler)(NSString *);
@property (nonatomic, copy) void (^onRewardedVideoCompletedMoPubRewardHandler)(JavaObject <JavaSet> *, MPDroidMoPubReward *);


//convenience class method
+ (MPDroidMoPubRewardedVideoListener *)listener;

@end