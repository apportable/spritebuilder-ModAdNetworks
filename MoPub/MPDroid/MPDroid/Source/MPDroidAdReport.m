//
//  MPDroidAdReport.m
// 
//  Bridges to the java object com.mopub.common.AdReport
//  See http://developer.android.com/reference/com/mopub/common/AdReport.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdReport.h>
//other required types
#import <JavaKit/JavaStringBuilder.h>
#import <JavaKit/JavaLocale.h>
#import <MPDroid/MPDroidClientMetadata.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidAdReport


//constructors
@bridge (constructor) initWithAdUnitId:clientMetadata:adResponse:;


//properties
@bridge (instance, method) responseString = getResponseString;



//methods
@bridge (method, instance) description = toString;


@end
