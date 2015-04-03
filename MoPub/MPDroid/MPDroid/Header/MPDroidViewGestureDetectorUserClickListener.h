//
//  MPDroidViewGestureDetectorUserClickListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.ViewGestureDetector.UserClickListener
//  See http://developer.android.com/reference/com/mopub/mobileads/ViewGestureDetector.UserClickListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidViewGestureDetectorUserClickListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.ViewGestureDetector$UserClickListener")
@protocol MPDroidViewGestureDetectorUserClickListener 

// properties
@property (nonatomic, readonly, assign) BOOL wasClicked;


// methods
- (void)onUserClick; /* onUserClick */
- (void)onResetUserClick; /* onResetUserClick */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.ViewGestureDetector$UserClickListener")
@interface MPDroidViewGestureDetectorUserClickListener : JavaObject <MPDroidViewGestureDetectorUserClickListener>

//properties for handlers
@property (nonatomic, copy) void (^onUserClickHandler)();
@property (nonatomic, copy) void (^onResetUserClickHandler)();
@property (nonatomic, copy) BOOL (^isWasClickedHandler)();


//convenience class method
+ (MPDroidViewGestureDetectorUserClickListener *)listener;

@end