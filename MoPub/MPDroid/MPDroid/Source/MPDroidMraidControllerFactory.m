//
//  MPDroidMraidControllerFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.MraidControllerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/MraidControllerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidControllerFactory.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidMraidController.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidPlacementType.h>


@implementation MPDroidMraidControllerFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) setInstanceByMraidControllerFactory: = setInstance;
@bridge (method, static) createWithContext:adReport:placementType: = create;


@end
