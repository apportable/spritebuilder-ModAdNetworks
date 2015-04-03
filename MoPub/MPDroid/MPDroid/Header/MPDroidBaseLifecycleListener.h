//
//  MPDroidBaseLifecycleListener.h
// 
//  Bridges to the java object com.mopub.common.BaseLifecycleListener
//  See http://developer.android.com/reference/com/mopub/common/BaseLifecycleListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidLifecycleListener.h>


//necessary forward declarations, classes and protocols
@class AndroidActivity;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseLifecycleListener
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.BaseLifecycleListener")
@interface MPDroidBaseLifecycleListener : JavaObject <MPDroidLifecycleListener>

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


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
