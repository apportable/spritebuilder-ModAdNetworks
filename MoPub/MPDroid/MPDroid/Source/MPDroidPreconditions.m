//
//  MPDroidPreconditions.m
// 
//  Bridges to the java object com.mopub.common.Preconditions
//  See http://developer.android.com/reference/com/mopub/common/Preconditions.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidPreconditions.h>
//other required types


@implementation MPDroidPreconditions


//constructors


//properties


//methods
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
