//
//  MPDroidDrawables.m
// 
//  Bridges to the java object com.mopub.common.util.Drawables
//  See http://developer.android.com/reference/com/mopub/common/util/Drawables.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDrawables.h>
//other required types
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidBitmap.h>
#import <AndroidKit/AndroidDrawable.h>


@implementation MPDroidDrawables


//constructors


//properties
@bridge (instance, method) bitmap = getBitmap;



//methods
@bridge (method, instance) createDrawable: = createDrawable;
@bridge (method, instance) clear = clear;
@bridge (field, static) background = BACKGROUND;

@bridge (field, static) defaultVideoPoster = DEFAULT_VIDEO_POSTER;

@bridge (field, static) leftArrow = LEFT_ARROW;

@bridge (field, static) unleftArrow = UNLEFT_ARROW;

@bridge (field, static) rightArrow = RIGHT_ARROW;

@bridge (field, static) unrightArrow = UNRIGHT_ARROW;

@bridge (field, static) refresh = REFRESH;

@bridge (field, static) close = CLOSE;

@bridge (field, static) interstitialCloseButtonNormal = INTERSTITIAL_CLOSE_BUTTON_NORMAL;

@bridge (field, static) interstitialCloseButtonPressed = INTERSTITIAL_CLOSE_BUTTON_PRESSED;

@bridge (field, static) thatchedBackground = THATCHED_BACKGROUND;



@end
