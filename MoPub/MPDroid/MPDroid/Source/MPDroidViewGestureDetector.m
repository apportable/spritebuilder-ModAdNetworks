//
//  MPDroidViewGestureDetector.m
// 
//  Bridges to the java object com.mopub.mobileads.ViewGestureDetector
//  See http://developer.android.com/reference/com/mopub/mobileads/ViewGestureDetector.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidViewGestureDetector.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidViewGestureDetectorUserClickListener.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidAdAlertGestureListener.h>
#import <AndroidKit/AndroidMotionEvent.h>
#import <AndroidKit/AndroidView.h>


@implementation MPDroidViewGestureDetector


//constructors
@bridge (constructor) initWithContext:view:adReport:;


//properties


//methods
@bridge (method, instance) sendTouchEvent: = sendTouchEvent;
@bridge (method, instance) setUserClickListener: = setUserClickListener;


@end
