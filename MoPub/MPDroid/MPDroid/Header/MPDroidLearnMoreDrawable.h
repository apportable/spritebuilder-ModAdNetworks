//
//  MPDroidLearnMoreDrawable.h
// 
//  Bridges to the java object com.mopub.mobileads.resource.LearnMoreDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/LearnMoreDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidCircleDrawable.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidPaint;
@class AndroidCanvas;
@class AndroidPoint;


//defines and their comments (static fields with values)


/**
Java class: MPDroidLearnMoreDrawable
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.resource.LearnMoreDrawable")
@interface MPDroidLearnMoreDrawable : MPDroidCircleDrawable 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)drawWithCanvas:(AndroidCanvas *)canvas; /* draw */


@end
