//
//  MPDroidErrorEventBuilder.m
// 
//  Bridges to the java object com.mopub.common.event.ErrorEvent.Builder
//  See http://developer.android.com/reference/com/mopub/common/event/ErrorEvent.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidErrorEventBuilder.h>
//other required types
#import <MPDroid/MPDroidBaseEvent.h>
#import <MPDroid/MPDroidErrorEvent.h>
#import <JavaKit/JavaException.h>
#import <JavaKit/JavaInteger.h>


@implementation MPDroidErrorEventBuilder


//constructors
@bridge (constructor) initWithEventName:eventCategory:;


//properties
@bridge (instance, method) build = build;



//methods
@bridge (method, instance) withErrorExceptionClassName: = withErrorExceptionClassName;
@bridge (method, instance) withErrorMessage: = withErrorMessage;
@bridge (method, instance) withErrorStackTrace: = withErrorStackTrace;
@bridge (method, instance) withErrorFileName: = withErrorFileName;
@bridge (method, instance) withErrorClassName: = withErrorClassName;
@bridge (method, instance) withErrorMethodName: = withErrorMethodName;
@bridge (method, instance) withErrorLineNumber: = withErrorLineNumber;
@bridge (method, instance) withException: = withException;


@end
