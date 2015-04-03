//
//  MPDroidAsyncTasks.m
// 
//  Bridges to the java object com.mopub.common.util.AsyncTasks
//  See http://developer.android.com/reference/com/mopub/common/util/AsyncTasks.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAsyncTasks.h>
//other required types
#import <AndroidKit/AndroidAsyncTask.h>
#import <JavaKit/JavaExecutor.h>


@implementation MPDroidAsyncTasks


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) setExecutorByExecutor: = setExecutor;
@bridge (method, static) safeExecuteOnExecutor:parameters: = safeExecuteOnExecutor;


@end
