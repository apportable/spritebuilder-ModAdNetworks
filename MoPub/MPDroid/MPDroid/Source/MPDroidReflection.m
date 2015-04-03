//
//  MPDroidReflection.m
// 
//  Bridges to the java object com.mopub.common.util.Reflection
//  See http://developer.android.com/reference/com/mopub/common/util/Reflection.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidReflection.h>
//other required types
#import <JavaKit/JavaClass.h>
#import <JavaKit/JavaMethod.h>


@implementation MPDroidReflection


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) declaredMethodWithTraversalForClass:methodName:parameterTypes: = getDeclaredMethodWithTraversal;
@bridge (method, static) classFound: = classFound;
@bridge (method, static) instantiateClassWithEmptyConstructor:class: = instantiateClassWithEmptyConstructor;


@end
