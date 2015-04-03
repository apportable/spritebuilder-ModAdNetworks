//
//  MPDroidBlockLifecycleListener.h
//
//  A block-based way adapt to the java interface com.mopub.common.LifecycleListener
//  See http://developer.android.com/reference/com/mopub/common/LifecycleListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidLifecycleListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockLifecycleListener")
@interface MPDroidBlockLifecycleListener : MPDroidLifecycleListener

//methods
- (void)onCreate:(AndroidActivity *)activity;
- (void)onStart:(AndroidActivity *)activity;
- (void)onPause:(AndroidActivity *)activity;
- (void)onResume:(AndroidActivity *)activity;
- (void)onRestart:(AndroidActivity *)activity;
- (void)onStop:(AndroidActivity *)activity;
- (void)onDestroy:(AndroidActivity *)activity;
- (void)onBackPressed:(AndroidActivity *)activity;


@end
