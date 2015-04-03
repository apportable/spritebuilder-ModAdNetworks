//
//  MPDroidErrorEvent.m
// 
//  Bridges to the java object com.mopub.common.event.ErrorEvent
//  See http://developer.android.com/reference/com/mopub/common/event/ErrorEvent.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidErrorEvent.h>
//other required types
#import <MPDroid/MPDroidErrorEventBuilder.h>
#import <JavaKit/JavaInteger.h>


@implementation MPDroidErrorEvent


//constructors


//properties
@bridge (instance, method) errorClassName = getErrorClassName;

@bridge (instance, method) errorFileName = getErrorFileName;

@bridge (instance, method) errorExceptionClassName = getErrorExceptionClassName;

@bridge (instance, method) errorMessage = getErrorMessage;

@bridge (instance, method) errorStackTrace = getErrorStackTrace;

@bridge (instance, method) errorMethodName = getErrorMethodName;

@bridge (instance, method) errorLineNumber = getErrorLineNumber;



//methods
@bridge (method, instance) description = toString;


@end
