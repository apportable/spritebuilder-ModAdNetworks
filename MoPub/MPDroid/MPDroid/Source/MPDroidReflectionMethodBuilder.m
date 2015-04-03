//
//  MPDroidReflectionMethodBuilder.m
// 
//  Bridges to the java object com.mopub.common.util.Reflection.MethodBuilder
//  See http://developer.android.com/reference/com/mopub/common/util/Reflection.MethodBuilder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidReflectionMethodBuilder.h>
//other required types
#import <JavaKit/JavaList.h>
#import <JavaKit/JavaClass.h>


@implementation MPDroidReflectionMethodBuilder


//constructors
@bridge (constructor) initWithInstance:methodName:;


//properties
@bridge (instance, method) execute = execute;

@bridge (instance, method) setAccessible = setAccessible;



//methods
@bridge (method, instance) addParam:parameter: = addParam;
@bridge (method, instance) setStaticByClass: = setStatic;


@end
