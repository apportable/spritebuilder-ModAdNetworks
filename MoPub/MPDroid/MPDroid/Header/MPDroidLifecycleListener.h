//
//  MPDroidLifecycleListener.h
// 
//  Bridges to the java interface com.mopub.common.LifecycleListener
//  See http://developer.android.com/reference/com/mopub/common/LifecycleListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidActivity;


//static fields


/**
Java interface: MPDroidLifecycleListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.LifecycleListener")
@protocol MPDroidLifecycleListener 

// properties


// methods
- (void)onCreate:(AndroidActivity *)activity; /* onCreate */
- (void)onStart:(AndroidActivity *)activity; /* onStart */
- (void)onPause:(AndroidActivity *)activity; /* onPause */
- (void)onResume:(AndroidActivity *)activity; /* onResume */
- (void)onRestart:(AndroidActivity *)activity; /* onRestart */
- (void)onStop:(AndroidActivity *)activity; /* onStop */
- (void)onDestroy:(AndroidActivity *)activity; /* onDestroy */
- (void)onBackPressed:(AndroidActivity *)activity; /* onBackPressed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.LifecycleListener")
@interface MPDroidLifecycleListener : JavaObject <MPDroidLifecycleListener>

//properties for handlers
@property (nonatomic, copy) void (^onCreateHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onStartHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onPauseHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onResumeHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onRestartHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onStopHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onDestroyHandler)(AndroidActivity *);
@property (nonatomic, copy) void (^onBackPressedHandler)(AndroidActivity *);


//convenience class method
+ (MPDroidLifecycleListener *)listener;

@end