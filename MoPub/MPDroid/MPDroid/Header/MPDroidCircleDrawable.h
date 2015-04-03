//
//  MPDroidCircleDrawable.h
// 
//  Bridges to the java object com.mopub.mobileads.resource.CircleDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/CircleDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidDrawable.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidColorFilter;
@class AndroidCanvas;
@class AndroidPaint;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCircleDrawable
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.resource.CircleDrawable")
@interface MPDroidCircleDrawable : AndroidDrawable 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, assign) int32_t opacity; /* getOpacity */


//static valueless fields


// methods
- (void)drawWithCanvas:(AndroidCanvas *)canvas; /* draw */
- (void)setAlpha:(int32_t)i; /* setAlpha */
- (void)setColorFilter:(AndroidColorFilter *)colorFilter; /* setColorFilter */


@end
