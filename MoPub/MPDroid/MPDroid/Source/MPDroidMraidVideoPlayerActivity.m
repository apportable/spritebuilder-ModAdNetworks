//
//  MPDroidMraidVideoPlayerActivity.m
// 
//  Bridges to the java object com.mopub.mobileads.MraidVideoPlayerActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MraidVideoPlayerActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidVideoPlayerActivity.h>
//other required types
#import <AndroidKit/AndroidBundle.h>
#import <AndroidKit/AndroidView.h>
#import <JavaKit/JavaClass.h>
#import <AndroidKit/AndroidIntent.h>
#import <MPDroid/MPDroidBaseVideoViewController.h>


@implementation MPDroidMraidVideoPlayerActivity


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) onBackPressed = onBackPressed;
@bridge (method, instance) onSetContentView: = onSetContentView;
@bridge (method, instance) onSetRequestedOrientation: = onSetRequestedOrientation;
@bridge (method, instance) onFinish = onFinish;
@bridge (method, instance) onStartActivityForResult:requestCode:bundle: = onStartActivityForResult;


@end
