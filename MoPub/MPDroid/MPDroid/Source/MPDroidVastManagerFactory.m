//
//  MPDroidVastManagerFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.VastManagerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/VastManagerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastManagerFactory.h>
//other required types
#import <MPDroid/MPDroidVastManager.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidVastManagerFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithContext: = create;
@bridge (method, instance) internalCreate: = internalCreate;


@end
