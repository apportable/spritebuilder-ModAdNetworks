//
//  MPDroidMoPubLifecycleManager.m
// 
//  Bridges to the java object com.mopub.common.MoPubLifecycleManager
//  See http://developer.android.com/reference/com/mopub/common/MoPubLifecycleManager.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubLifecycleManager.h>
//other required types
#import <AndroidKit/AndroidActivity.h>
#import <JavaKit/JavaSet.h>
#import <JavaKit/JavaWeakReference.h>
#import <MPDroid/MPDroidLifecycleListener.h>


@implementation MPDroidMoPubLifecycleManager


//constructors


//properties


//methods
@bridge (method, static) instanceForActivity: = getInstance;
@bridge (method, instance) addLifecycleListener: = addLifecycleListener;
@bridge (method, instance) onCreate: = onCreate;
@bridge (method, instance) onStart: = onStart;
@bridge (method, instance) onPause: = onPause;
@bridge (method, instance) onResume: = onResume;
@bridge (method, instance) onRestart: = onRestart;
@bridge (method, instance) onStop: = onStop;
@bridge (method, instance) onDestroy: = onDestroy;
@bridge (method, instance) onBackPressed: = onBackPressed;


@end
