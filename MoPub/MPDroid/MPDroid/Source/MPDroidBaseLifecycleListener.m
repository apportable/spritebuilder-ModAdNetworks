//
//  MPDroidBaseLifecycleListener.m
// 
//  Bridges to the java object com.mopub.common.BaseLifecycleListener
//  See http://developer.android.com/reference/com/mopub/common/BaseLifecycleListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBaseLifecycleListener.h>
//other required types
#import <AndroidKit/AndroidActivity.h>


@implementation MPDroidBaseLifecycleListener


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) onCreate: = onCreate;
@bridge (method, instance) onStart: = onStart;
@bridge (method, instance) onPause: = onPause;
@bridge (method, instance) onResume: = onResume;
@bridge (method, instance) onRestart: = onRestart;
@bridge (method, instance) onStop: = onStop;
@bridge (method, instance) onDestroy: = onDestroy;
@bridge (method, instance) onBackPressed: = onBackPressed;


@end
