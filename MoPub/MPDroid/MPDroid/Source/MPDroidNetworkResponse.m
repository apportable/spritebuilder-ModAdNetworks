//
//  MPDroidNetworkResponse.m
// 
//  Bridges to the java object com.mopub.volley.NetworkResponse
//  See http://developer.android.com/reference/com/mopub/volley/NetworkResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNetworkResponse.h>
//other required types
#import <JavaKit/JavaMap.h>


@implementation MPDroidNetworkResponse


//constructors
@bridge (constructor) initWithStatusCode:data:map:notModified:;
@bridge (constructor) initWithData:;
@bridge (constructor) initWithData:map:;


//properties
@bridge (field) statusCode = statusCode;

@bridge (field) data = data;

@bridge (field) headers = headers;

@bridge (field) notModified = notModified;



//methods


@end
