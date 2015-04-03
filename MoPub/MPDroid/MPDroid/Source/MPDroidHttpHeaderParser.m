//
//  MPDroidHttpHeaderParser.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.HttpHeaderParser
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpHeaderParser.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHttpHeaderParser.h>
//other required types
#import <MPDroid/MPDroidCacheEntry.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidHttpHeaderParser


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) parseCacheHeaders: = parseCacheHeaders;
@bridge (method, static) parseDateAsEpoch: = parseDateAsEpoch;
@bridge (method, static) parseCharset: = parseCharset;


@end
