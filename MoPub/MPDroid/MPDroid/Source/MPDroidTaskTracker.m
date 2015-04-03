//
//  MPDroidTaskTracker.m
// 
//  Bridges to the java object com.mopub.mobileads.TaskTracker
//  See http://developer.android.com/reference/com/mopub/mobileads/TaskTracker.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidTaskTracker.h>
//other required types


@implementation MPDroidTaskTracker


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) currentTaskId = getCurrentTaskId;



//methods
@bridge (method, instance) newTaskStarted = newTaskStarted;
@bridge (method, instance) markTaskCompleted: = markTaskCompleted;
@bridge (method, instance) isMostCurrentTask: = isMostCurrentTask;


@end
