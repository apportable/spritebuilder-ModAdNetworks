//
//  MPDroidHeaderUtils.m
// 
//  Bridges to the java object com.mopub.network.HeaderUtils
//  See http://developer.android.com/reference/com/mopub/network/HeaderUtils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHeaderUtils.h>
//other required types
#import <MPDroid/MPDroidResponseHeader.h>
#import <ApacheKit/ApacheHttpResponse.h>
#import <JavaKit/JavaInteger.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidHeaderUtils


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) extractHeader:responseHeader: = extractHeader;
@bridge (method, static) extractIntegerHeader:responseHeader: = extractIntegerHeader;
@bridge (method, static) extractBooleanHeader:responseHeader:defaultValue: = extractBooleanHeader;
@bridge (method, static) extractHeader:responseHeader: = extractHeader;
@bridge (method, static) extractBooleanHeader:responseHeader:defaultValue: = extractBooleanHeader;
@bridge (method, static) extractIntegerHeader:responseHeader: = extractIntegerHeader;
@bridge (method, static) extractIntHeader:responseHeader:defaultValue: = extractIntHeader;


@end
