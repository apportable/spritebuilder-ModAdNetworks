//
//  MPDroidLifecycleListener.m
// 
//  An adapter to the java interface com.mopub.common.LifecycleListener
//  See http://developer.android.com/reference/com/mopub/common/LifecycleListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidLifecycleListener.h>
//other required types
#import <AndroidKit/AndroidActivity.h>
#import "block/include/MPDroidBlockLifecycleListener.h"


@implementation MPDroidLifecycleListener

//properties
@bridge (method, instance) onBackPressed: = onBackPressed;
@bridge (method, instance) onCreate: = onCreate;
@bridge (method, instance) onDestroy: = onDestroy;
@bridge (method, instance) onPause: = onPause;
@bridge (method, instance) onRestart: = onRestart;
@bridge (method, instance) onResume: = onResume;
@bridge (method, instance) onStart: = onStart;
@bridge (method, instance) onStop: = onStop;


//methods


//convenience class method
+ (MPDroidLifecycleListener *)listener
{
    return [[[MPDroidBlockLifecycleListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onCreateHandler != nil)
    {
        Block_release(_onCreateHandler);
        _onCreateHandler = nil;
    }
    if (_onStartHandler != nil)
    {
        Block_release(_onStartHandler);
        _onStartHandler = nil;
    }
    if (_onPauseHandler != nil)
    {
        Block_release(_onPauseHandler);
        _onPauseHandler = nil;
    }
    if (_onResumeHandler != nil)
    {
        Block_release(_onResumeHandler);
        _onResumeHandler = nil;
    }
    if (_onRestartHandler != nil)
    {
        Block_release(_onRestartHandler);
        _onRestartHandler = nil;
    }
    if (_onStopHandler != nil)
    {
        Block_release(_onStopHandler);
        _onStopHandler = nil;
    }
    if (_onDestroyHandler != nil)
    {
        Block_release(_onDestroyHandler);
        _onDestroyHandler = nil;
    }
    if (_onBackPressedHandler != nil)
    {
        Block_release(_onBackPressedHandler);
        _onBackPressedHandler = nil;
    }
    [super dealloc];
}


@end
