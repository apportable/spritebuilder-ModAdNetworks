//
//  MPDroidViewGestureDetector.h
// 
//  Bridges to the java object com.mopub.mobileads.ViewGestureDetector
//  See http://developer.android.com/reference/com/mopub/mobileads/ViewGestureDetector.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidGestureDetector.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@protocol MPDroidViewGestureDetectorUserClickListener;
@class AndroidContext;
@class MPDroidAdAlertGestureListener;
@class AndroidMotionEvent;
@class AndroidView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidViewGestureDetector
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.ViewGestureDetector")
@interface MPDroidViewGestureDetector : AndroidGestureDetector 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context view:(AndroidView *)view adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)sendTouchEvent:(AndroidMotionEvent *)motionEvent; /* sendTouchEvent */
- (void)setUserClickListener:(JavaObject <MPDroidViewGestureDetectorUserClickListener> *)listener; /* setUserClickListener */


@end
