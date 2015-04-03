//
//  MPDroidAdAlertGestureListener.h
// 
//  Bridges to the java object com.mopub.mobileads.AdAlertGestureListener
//  See http://developer.android.com/reference/com/mopub/mobileads/AdAlertGestureListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidGestureDetectorSimpleOnGestureListener.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class AndroidMotionEvent;
@class MPDroidAdAlertReporter;
@class AndroidView;


//defines and their comments (static fields with values)
#define MPDroidAdAlertGestureListenerMinimumNumberOfZigzagsToFlag 4
#define MPDroidAdAlertGestureListenerMaximumThresholdXInDips 100.000000
#define MPDroidAdAlertGestureListenerMaximumThresholdYInDips 100.000000

/**
Java class: MPDroidAdAlertGestureListener
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.AdAlertGestureListener")
@interface MPDroidAdAlertGestureListener : AndroidGestureDetectorSimpleOnGestureListener 

// constructors


// properties


//static valueless fields


// methods
- (BOOL)onScroll:(AndroidMotionEvent *)e1 motionEvent:(AndroidMotionEvent *)e2 distanceX:(float)distanceX distanceY:(float)distanceY; /* onScroll */


@end
