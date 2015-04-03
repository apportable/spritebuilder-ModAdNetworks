//
//  MPDroidResponse.m
// 
//  Bridges to the java object com.mopub.volley.Response
//  See http://developer.android.com/reference/com/mopub/volley/Response.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidResponse.h>
//other required types
#import <MPDroid/MPDroidCacheEntry.h>
#import <MPDroid/MPDroidVolleyError.h>


@implementation MPDroidResponse


//constructors


//properties
@bridge (field) result = result;

@bridge (field) cacheEntry = cacheEntry;

@bridge (field) error = error;

@bridge (field) intermediate = intermediate;
@bridge (field) setIntermediate: = intermediate;

@bridge (instance, method) isSuccess = isSuccess;



//methods
@bridge (method, static) successWithResult:entry: = success;
@bridge (method, static) errorWithVolleyError: = error;


@end
