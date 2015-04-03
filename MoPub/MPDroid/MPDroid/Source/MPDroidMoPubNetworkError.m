//
//  MPDroidMoPubNetworkError.m
// 
//  Bridges to the java object com.mopub.network.MoPubNetworkError
//  See http://developer.android.com/reference/com/mopub/network/MoPubNetworkError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNetworkError.h>
//other required types
#import <MPDroid/MPDroidNetworkResponse.h>
#import <JavaKit/JavaThrowable.h>
#import <MPDroid/MPDroidMoPubNetworkErrorReason.h>


@implementation MPDroidMoPubNetworkError


//constructors
@bridge (constructor) initWithReason:;
@bridge (constructor) initWithNetworkResponse:reason:;
@bridge (constructor) initWithThrowable:reason:;
@bridge (constructor) initWithMessage:reason:;
@bridge (constructor) initWithMessage:throwable:reason:;


//properties
@bridge (instance, method) reason = getReason;



//methods


@end
