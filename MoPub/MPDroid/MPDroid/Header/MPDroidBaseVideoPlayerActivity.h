//
//  MPDroidBaseVideoPlayerActivity.h
// 
//  Bridges to the java object com.mopub.mobileads.BaseVideoPlayerActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseVideoPlayerActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidActivity.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidIntent;
@class AndroidContext;
@class MPDroidVastVideoConfiguration;


//defines and their comments (static fields with values)
#define MPDroidBaseVideoPlayerActivityVideoClassExtrasKey @"video_view_class_name"
#define MPDroidBaseVideoPlayerActivityVideoUrl @"video_url"

/**
Java class: MPDroidBaseVideoPlayerActivity
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.BaseVideoPlayerActivity")
@interface MPDroidBaseVideoPlayerActivity : AndroidActivity 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)startMraid:(AndroidContext *)context videoUrl:(NSString *)videoUrl; /* startMraid */


@end
