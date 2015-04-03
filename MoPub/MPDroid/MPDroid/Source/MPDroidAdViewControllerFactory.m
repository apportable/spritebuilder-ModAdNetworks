//
//  MPDroidAdViewControllerFactory.m
// 
//  Bridges to the java object com.mopub.mobileads.factories.AdViewControllerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/AdViewControllerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdViewControllerFactory.h>
//other required types
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidAdViewController.h>
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidAdViewControllerFactory


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) createWithContext:moPubView: = create;


@end
