//
//  MPDroidAdAlertReporter.m
// 
//  Bridges to the java object com.mopub.mobileads.AdAlertReporter
//  See http://developer.android.com/reference/com/mopub/mobileads/AdAlertReporter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdAlertReporter.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <JavaKit/JavaArrayList.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidBitmap.h>
#import <AndroidKit/AndroidView.h>
#import <AndroidKit/AndroidIntent.h>


@implementation MPDroidAdAlertReporter


//constructors
@bridge (constructor) initWithContext:view:adReport:;


//properties


//methods
@bridge (method, instance) send = send;


@end
