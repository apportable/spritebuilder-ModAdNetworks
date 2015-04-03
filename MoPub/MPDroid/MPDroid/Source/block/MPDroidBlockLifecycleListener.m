//
//  MPDroidBlockLifecycleListener.m
//
//  A block-based way adapt to the java interface com.mopub.common.LifecycleListener
//  See MPDroid/MPDroidBlockLifecycleListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockLifecycleListener.h"
//other required types
#import <AndroidKit/AndroidActivity.h>


@implementation MPDroidBlockLifecycleListener

// overrides
- (void)onCreate:(AndroidActivity *)activity
{
    if (self.onCreateHandler)
    {
        self.onCreateHandler(activity);
    }
}

- (void)onStart:(AndroidActivity *)activity
{
    if (self.onStartHandler)
    {
        self.onStartHandler(activity);
    }
}

- (void)onPause:(AndroidActivity *)activity
{
    if (self.onPauseHandler)
    {
        self.onPauseHandler(activity);
    }
}

- (void)onResume:(AndroidActivity *)activity
{
    if (self.onResumeHandler)
    {
        self.onResumeHandler(activity);
    }
}

- (void)onRestart:(AndroidActivity *)activity
{
    if (self.onRestartHandler)
    {
        self.onRestartHandler(activity);
    }
}

- (void)onStop:(AndroidActivity *)activity
{
    if (self.onStopHandler)
    {
        self.onStopHandler(activity);
    }
}

- (void)onDestroy:(AndroidActivity *)activity
{
    if (self.onDestroyHandler)
    {
        self.onDestroyHandler(activity);
    }
}

- (void)onBackPressed:(AndroidActivity *)activity
{
    if (self.onBackPressedHandler)
    {
        self.onBackPressedHandler(activity);
    }
}



// bridges
@bridge (callback) onCreate: = onCreate;
@bridge (callback) onStart: = onStart;
@bridge (callback) onPause: = onPause;
@bridge (callback) onResume: = onResume;
@bridge (callback) onRestart: = onRestart;
@bridge (callback) onStop: = onStop;
@bridge (callback) onDestroy: = onDestroy;
@bridge (callback) onBackPressed: = onBackPressed;


@end
