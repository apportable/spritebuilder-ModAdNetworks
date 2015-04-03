//
//  MPDroidCountdownDrawable.m
// 
//  Bridges to the java object com.mopub.mobileads.resource.CountdownDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/CountdownDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCountdownDrawable.h>
//other required types
#import <AndroidKit/AndroidRect.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidCanvas.h>
#import <AndroidKit/AndroidPaint.h>


@implementation MPDroidCountdownDrawable


//constructors
@bridge (constructor) initWithContext:;


//properties


//methods
@bridge (method, instance) drawWithCanvas: = draw;
@bridge (method, instance) updateText: = updateText;


@end
