//
//  MPDroidCacheEntry.m
// 
//  Bridges to the java object com.mopub.volley.Cache.Entry
//  See http://developer.android.com/reference/com/mopub/volley/Cache.Entry.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCacheEntry.h>
//other required types
#import <JavaKit/JavaMap.h>


@implementation MPDroidCacheEntry


//constructors
@bridge (constructor) init;


//properties
@bridge (field) data = data;
@bridge (field) setData: = data;

@bridge (field) etag = etag;
@bridge (field) setEtag: = etag;

@bridge (field) serverDate = serverDate;
@bridge (field) setServerDate: = serverDate;

@bridge (field) softTtl = softTtl;
@bridge (field) setSoftTtl: = softTtl;

@bridge (field) responseHeaders = responseHeaders;
@bridge (field) setResponseHeaders: = responseHeaders;

@bridge (instance, method) isExpired = isExpired;



//methods
@bridge (method, instance) refreshNeeded = refreshNeeded;


@end
