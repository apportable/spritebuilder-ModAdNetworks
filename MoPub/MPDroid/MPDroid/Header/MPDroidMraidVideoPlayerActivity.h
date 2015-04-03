//
//  MPDroidMraidVideoPlayerActivity.h
// 
//  Bridges to the java object com.mopub.mobileads.MraidVideoPlayerActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MraidVideoPlayerActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseVideoPlayerActivity.h>
//imports for implemented protocols
#import <MPDroid/MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.h>


//necessary forward declarations, classes and protocols
@class AndroidIntent;
@class AndroidBundle;
@class JavaClass;
@class AndroidView;
@class MPDroidBaseVideoViewController;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidVideoPlayerActivity
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MraidVideoPlayerActivity")
@interface MPDroidMraidVideoPlayerActivity : MPDroidBaseVideoPlayerActivity <MPDroidBaseVideoViewControllerBaseVideoViewControllerListener>

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)onBackPressed; /* onBackPressed */
- (void)onSetContentView:(AndroidView *)view; /* onSetContentView */
- (void)onSetRequestedOrientation:(int32_t)requestedOrientation; /* onSetRequestedOrientation */
- (void)onFinish; /* onFinish */
- (void)onStartActivityForResult:(JavaClass *)clazz requestCode:(int32_t)requestCode bundle:(AndroidBundle *)extras; /* onStartActivityForResult */


@end
