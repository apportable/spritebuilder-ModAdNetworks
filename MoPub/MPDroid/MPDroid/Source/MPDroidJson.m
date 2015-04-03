//
//  MPDroidJson.m
// 
//  Bridges to the java object com.mopub.common.util.Json
//  See http://developer.android.com/reference/com/mopub/common/util/Json.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidJson.h>
//other required types
#import <JavaKit/JavaClass.h>
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaJSONObject.h>


@implementation MPDroidJson


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) jsonStringToMap: = jsonStringToMap;
@bridge (method, static) mapToJsonString: = mapToJsonString;
@bridge (method, static) jsonArrayToStringArray: = jsonArrayToStringArray;
@bridge (method, static) jsonValueForJSONObject:key:class: = getJsonValue;


@end
