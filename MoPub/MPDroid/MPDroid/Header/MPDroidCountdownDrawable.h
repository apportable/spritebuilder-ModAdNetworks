//
//  MPDroidCountdownDrawable.h
// 
//  Bridges to the java object com.mopub.mobileads.resource.CountdownDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/CountdownDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidCircleDrawable.h>
//imports for implemented protocols
#import <MPDroid/MPDroidTextDrawable.h>


//necessary forward declarations, classes and protocols
@class AndroidRect;
@class AndroidContext;
@class AndroidCanvas;
@class AndroidPaint;


//defines and their comments (static fields with values)
#define MPDroidCountdownDrawableTextSizeSp 18.000000

/**
Java class: MPDroidCountdownDrawable
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.resource.CountdownDrawable")
@interface MPDroidCountdownDrawable : MPDroidCircleDrawable <MPDroidTextDrawable>

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties


//static valueless fields


// methods
- (void)drawWithCanvas:(AndroidCanvas *)canvas; /* draw */
- (void)updateText:(NSString *)text; /* updateText */


@end
