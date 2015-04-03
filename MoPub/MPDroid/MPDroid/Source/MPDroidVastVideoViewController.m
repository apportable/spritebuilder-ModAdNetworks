//
//  MPDroidVastVideoViewController.m
// 
//  Bridges to the java object com.mopub.mobileads.VastVideoViewController
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastVideoViewController.h>
//other required types
#import <AndroidKit/AndroidIntent.h>
#import <AndroidKit/AndroidBundle.h>
#import <AndroidKit/AndroidImageView.h>
#import <MPDroid/MPDroidVastVideoConfiguration.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidDownloadResponse.h>
#import <AndroidKit/AndroidMediaPlayer.h>
#import <JavaKit/JavaList.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidVastCompanionAd.h>
#import <AndroidKit/AndroidViewOnTouchListener.h>
#import <MPDroid/MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.h>
#import <AndroidKit/AndroidVideoView.h>


@implementation MPDroidVastVideoViewController


//constructors


//properties
@bridge (instance, method) backButtonEnabled = backButtonEnabled;



//methods
@bridge (method, instance) onComplete:downloadResponse: = onComplete;


@end
