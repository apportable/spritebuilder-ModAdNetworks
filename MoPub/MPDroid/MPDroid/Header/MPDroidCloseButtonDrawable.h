//
//  MPDroidCloseButtonDrawable.h
// 
//  Bridges to the java object com.mopub.mobileads.resource.CloseButtonDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/CloseButtonDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidCircleDrawable.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidPoint;
@class AndroidCanvas;
@class AndroidPaint;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCloseButtonDrawable
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.resource.CloseButtonDrawable")
@interface MPDroidCloseButtonDrawable : MPDroidCircleDrawable 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)drawWithCanvas:(AndroidCanvas *)canvas; /* draw */


@end
