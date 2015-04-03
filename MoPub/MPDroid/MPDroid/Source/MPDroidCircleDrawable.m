//
//  MPDroidCircleDrawable.m
// 
//  Bridges to the java object com.mopub.mobileads.resource.CircleDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/CircleDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCircleDrawable.h>
//other required types
#import <AndroidKit/AndroidColorFilter.h>
#import <AndroidKit/AndroidCanvas.h>
#import <AndroidKit/AndroidPaint.h>


@implementation MPDroidCircleDrawable


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) opacity = getOpacity;



//methods
@bridge (method, instance) drawWithCanvas: = draw;
@bridge (method, instance) setAlpha: = setAlpha;
@bridge (method, instance) setColorFilter: = setColorFilter;


@end
