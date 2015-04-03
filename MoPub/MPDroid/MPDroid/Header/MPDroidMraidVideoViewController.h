//
//  MPDroidMraidVideoViewController.h
// 
//  Bridges to the java object com.mopub.mraid.MraidVideoViewController
//  See http://developer.android.com/reference/com/mopub/mraid/MraidVideoViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseVideoViewController.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidImageButton;
@class AndroidVideoView;
@protocol MPDroidBaseVideoViewControllerBaseVideoViewControllerListener;
@class AndroidContext;
@class AndroidBundle;


//defines and their comments (static fields with values)
#define MPDroidMraidVideoViewControllerCloseButtonSize 50.000000
#define MPDroidMraidVideoViewControllerCloseButtonPadding 8.000000

/**
Java class: MPDroidMraidVideoViewController
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidVideoViewController")
@interface MPDroidMraidVideoViewController : MPDroidBaseVideoViewController 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context bundle:(AndroidBundle *)bundle baseVideoViewControllerListener:(JavaObject <MPDroidBaseVideoViewControllerBaseVideoViewControllerListener> *)baseVideoViewControllerListener; /* <init> */


// properties


//static valueless fields


// methods


@end
