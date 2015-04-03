//
//  MPDroidDrawables.h
// 
//  Bridges to the java object com.mopub.common.util.Drawables
//  See http://developer.android.com/reference/com/mopub/common/util/Drawables.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidContext;
@class AndroidBitmap;
@class AndroidDrawable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDrawables
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Drawables")
@interface MPDroidDrawables : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, retain) AndroidBitmap *bitmap; /* getBitmap */


//static valueless fields
+ (MPDroidDrawables *)background;
+ (MPDroidDrawables *)defaultVideoPoster;
+ (MPDroidDrawables *)leftArrow;
+ (MPDroidDrawables *)unleftArrow;
+ (MPDroidDrawables *)rightArrow;
+ (MPDroidDrawables *)unrightArrow;
+ (MPDroidDrawables *)refresh;
+ (MPDroidDrawables *)close;
+ (MPDroidDrawables *)interstitialCloseButtonNormal;
+ (MPDroidDrawables *)interstitialCloseButtonPressed;
+ (MPDroidDrawables *)thatchedBackground;

// methods
- (AndroidDrawable *)createDrawable:(AndroidContext *)context; /* createDrawable */
- (void)clear; /* clear */


@end
