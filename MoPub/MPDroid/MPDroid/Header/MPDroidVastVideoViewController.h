//
//  MPDroidVastVideoViewController.h
// 
//  Bridges to the java object com.mopub.mobileads.VastVideoViewController
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseVideoViewController.h>
//imports for implemented protocols
#import <MPDroid/MPDroidDownloadTaskDownloadTaskListener.h>


//necessary forward declarations, classes and protocols
@class AndroidIntent;
@class AndroidBundle;
@class AndroidImageView;
@class MPDroidVastVideoConfiguration;
@protocol JavaRunnable;
@class AndroidHandler;
@class MPDroidDownloadResponse;
@class AndroidMediaPlayer;
@protocol JavaList;
@class AndroidContext;
@class MPDroidVastCompanionAd;
@protocol AndroidViewOnTouchListener;
@protocol MPDroidBaseVideoViewControllerBaseVideoViewControllerListener;
@class AndroidVideoView;


//defines and their comments (static fields with values)
#define MPDroidVastVideoViewControllerVastVideoConfiguration @"vast_video_configuration"
#define MPDroidVastVideoViewControllerFirstQuarterMarker 0.250000
#define MPDroidVastVideoViewControllerMidPointMarker 0.500000
#define MPDroidVastVideoViewControllerThirdQuarterMarker 0.750000
#define MPDroidVastVideoViewControllerVideoProgressTimerCheckerDelay 50ll
#define MPDroidVastVideoViewControllerMopubBrowserRequestCode 1
#define MPDroidVastVideoViewControllerMaxVideoRetries 1
#define MPDroidVastVideoViewControllerVideoViewFilePermissionError -2147483648
#define MPDroidVastVideoViewControllerDefaultVideoDurationForCloseButton 5000
#define MPDroidVastVideoViewControllerMaxVideoDurationForCloseButton 16000
#define MPDroidVastVideoViewControllerStartMarkThreshold 2000

/**
Java class: MPDroidVastVideoViewController
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.VastVideoViewController")
@interface MPDroidVastVideoViewController : MPDroidBaseVideoViewController <MPDroidDownloadTaskDownloadTaskListener>

// constructors


// properties
@property (nonatomic, readonly, assign) BOOL backButtonEnabled; /* backButtonEnabled */


//static valueless fields


// methods
- (void)onComplete:(NSString *)url downloadResponse:(MPDroidDownloadResponse *)downloadResponse; /* onComplete */


@end
