//
//  MPDroidMethodBuilderFactory.m
// 
//  Bridges to the java object com.mopub.common.factories.MethodBuilderFactory
//  See http://developer.android.com/reference/com/mopub/common/factories/MethodBuilderFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMethodBuilderFactory.h>
//other required types
#import <MPDroid/MPDroidReflectionMethodBuilder.h>


@implementation MPDroidMethodBuilderFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithObject:methodName: = create;


@end
