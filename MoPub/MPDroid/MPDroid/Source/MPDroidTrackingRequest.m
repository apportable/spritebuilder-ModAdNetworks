//
//  MPDroidTrackingRequest.m
// 
//  Bridges to the java object com.mopub.network.TrackingRequest
//  See http://developer.android.com/reference/com/mopub/network/TrackingRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidTrackingRequest.h>
//other required types
#import <MPDroid/MPDroidTrackingRequestListener.h>
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <JavaKit/JavaVoid.h>
#import <JavaKit/JavaIterable.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidMoPubEventsType.h>


@implementation MPDroidTrackingRequest


//constructors


//properties


//methods
@bridge (method, instance) deliverResponse: = deliverResponse;
@bridge (method, static) makeTrackingHttpRequest:context: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context:type: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context:listener:type: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context:listener: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context:type: = makeTrackingHttpRequest;
@bridge (method, static) makeTrackingHttpRequest:context:listener:type: = makeTrackingHttpRequest;
@bridge (method, instance) deliverResponse = deliverResponse;


@end
