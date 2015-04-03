//
//  MPDroidCloseableLayout.m
// 
//  Bridges to the java object com.mopub.common.CloseableLayout
//  See http://developer.android.com/reference/com/mopub/common/CloseableLayout.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCloseableLayout.h>
//other required types
#import <AndroidKit/AndroidCanvas.h>
#import <AndroidKit/AndroidStateListDrawable.h>
#import <AndroidKit/AndroidRect.h>
#import <MPDroid/MPDroidCloseableLayoutOnCloseListener.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidMotionEvent.h>
#import <MPDroid/MPDroidCloseableLayoutClosePosition.h>


@implementation MPDroidCloseableLayout


//constructors
@bridge (constructor) initWithContext:;


//properties
@bridge (instance, method) isCloseVisible = isCloseVisible;
@bridge (instance, method) setCloseVisible: = setCloseVisible;


//methods
@bridge (method, instance) setOnCloseListener: = setOnCloseListener;
@bridge (method, instance) setClosePosition: = setClosePosition;
@bridge (method, instance) drawWithCanvas: = draw;
@bridge (method, instance) applyCloseRegionBounds:rect:rect: = applyCloseRegionBounds;
@bridge (method, instance) onInterceptTouchEvent: = onInterceptTouchEvent;
@bridge (method, instance) onTouchEvent: = onTouchEvent;


@end
