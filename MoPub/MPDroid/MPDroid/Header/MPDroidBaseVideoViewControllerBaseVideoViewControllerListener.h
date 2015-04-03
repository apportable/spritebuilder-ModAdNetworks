//
//  MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.BaseVideoViewController.BaseVideoViewControllerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseVideoViewController.BaseVideoViewControllerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;
@class JavaClass;
@class AndroidBundle;


//static fields


/**
Java interface: MPDroidBaseVideoViewControllerBaseVideoViewControllerListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.BaseVideoViewController$BaseVideoViewControllerListener")
@protocol MPDroidBaseVideoViewControllerBaseVideoViewControllerListener 

// properties


// methods
- (void)onSetContentView:(AndroidView *)view; /* onSetContentView */
- (void)onSetRequestedOrientation:(int32_t)requestedOrientation; /* onSetRequestedOrientation */
- (void)onFinish; /* onFinish */
- (void)onStartActivityForResult:(JavaClass *)clazz requestCode:(int32_t)requestCode bundle:(AndroidBundle *)extras; /* onStartActivityForResult */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.BaseVideoViewController$BaseVideoViewControllerListener")
@interface MPDroidBaseVideoViewControllerBaseVideoViewControllerListener : JavaObject <MPDroidBaseVideoViewControllerBaseVideoViewControllerListener>

//properties for handlers
@property (nonatomic, copy) void (^onSetContentViewHandler)(AndroidView *);
@property (nonatomic, copy) void (^onSetRequestedOrientationHandler)(int32_t);
@property (nonatomic, copy) void (^onFinishHandler)();
@property (nonatomic, copy) void (^onStartActivityForResultRequestCodeBundleHandler)(JavaClass *, int32_t, AndroidBundle *);


//convenience class method
+ (MPDroidBaseVideoViewControllerBaseVideoViewControllerListener *)listener;

@end