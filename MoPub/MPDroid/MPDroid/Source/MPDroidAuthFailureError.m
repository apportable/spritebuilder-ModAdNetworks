//
//  MPDroidAuthFailureError.m
// 
//  Bridges to the java object com.mopub.volley.AuthFailureError
//  See http://developer.android.com/reference/com/mopub/volley/AuthFailureError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAuthFailureError.h>
//other required types
#import <AndroidKit/AndroidIntent.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <JavaKit/JavaException.h>


@implementation MPDroidAuthFailureError


//constructors
@bridge (constructor) init;
@bridge (constructor) initWithIntent:;
@bridge (constructor) initWithNetworkResponse:;
@bridge (constructor) initWithMessage:;
@bridge (constructor) initWithMessage:exception:;


//properties
@bridge (instance, method) message = getMessage;

@bridge (instance, method) resolutionIntent = getResolutionIntent;



//methods


@end
