//
//  MPDroidPreconditionsNoThrow.m
// 
//  Bridges to the java object com.mopub.common.Preconditions.NoThrow
//  See http://developer.android.com/reference/com/mopub/common/Preconditions.NoThrow.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidPreconditionsNoThrow.h>
//other required types


@implementation MPDroidPreconditionsNoThrow


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) setStrictModeByStrictMode: = setStrictMode;
@bridge (method, static) checkArgument: = checkArgument;
@bridge (method, static) checkArgument:errorMessage: = checkArgument;
@bridge (method, static) checkArgument:errorMessageTemplate:errorMessageArgs: = checkArgument;
@bridge (method, static) checkState: = checkState;
@bridge (method, static) checkState:errorMessage: = checkState;
@bridge (method, static) checkState:errorMessageTemplate:errorMessageArgs: = checkState;
@bridge (method, static) checkNotNull: = checkNotNull;
@bridge (method, static) checkNotNull:errorMessage: = checkNotNull;
@bridge (method, static) checkNotNull:errorMessageTemplate:errorMessageArgs: = checkNotNull;
@bridge (method, static) checkUiThread = checkUiThread;
@bridge (method, static) checkUiThread: = checkUiThread;
@bridge (method, static) checkUiThread:errorMessageArgs: = checkUiThread;


@end
