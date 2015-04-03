//
//  MPDroidBaseVideoViewController.h
// 
//  Bridges to the java object com.mopub.mobileads.BaseVideoViewController
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseVideoViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidRelativeLayout;
@class AndroidVideoView;
@class AndroidViewGroup;
@class JavaLong;
@class AndroidIntent;
@protocol MPDroidBaseVideoViewControllerBaseVideoViewControllerListener;
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseVideoViewController
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.BaseVideoViewController")
@interface MPDroidBaseVideoViewController : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, assign) BOOL backButtonEnabled; /* backButtonEnabled */
@property (nonatomic, readonly, retain) AndroidViewGroup *layout; /* getLayout */


//static valueless fields


// methods


@end
