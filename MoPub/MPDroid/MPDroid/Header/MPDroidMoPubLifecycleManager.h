//
//  MPDroidMoPubLifecycleManager.h
// 
//  Bridges to the java object com.mopub.common.MoPubLifecycleManager
//  See http://developer.android.com/reference/com/mopub/common/MoPubLifecycleManager.html for documentation.
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
@protocol JavaSet;
@class JavaWeakReference;
@protocol MPDroidLifecycleListener;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubLifecycleManager
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.MoPubLifecycleManager")
@interface MPDroidMoPubLifecycleManager : JavaObject <MPDroidLifecycleListener>

// constructors


// properties


//static valueless fields


// methods
+ (MPDroidMoPubLifecycleManager *)instanceForActivity:(AndroidActivity *)mainActivity; /* getInstance */
- (void)addLifecycleListener:(JavaObject <MPDroidLifecycleListener> *)listener; /* addLifecycleListener */
- (void)onCreate:(AndroidActivity *)activity; /* onCreate */
- (void)onStart:(AndroidActivity *)activity; /* onStart */
- (void)onPause:(AndroidActivity *)activity; /* onPause */
- (void)onResume:(AndroidActivity *)activity; /* onResume */
- (void)onRestart:(AndroidActivity *)activity; /* onRestart */
- (void)onStop:(AndroidActivity *)activity; /* onStop */
- (void)onDestroy:(AndroidActivity *)activity; /* onDestroy */
- (void)onBackPressed:(AndroidActivity *)activity; /* onBackPressed */


@end
