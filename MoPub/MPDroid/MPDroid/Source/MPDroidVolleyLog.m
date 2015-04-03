//
//  MPDroidVolleyLog.m
// 
//  Bridges to the java object com.mopub.volley.VolleyLog
//  See http://developer.android.com/reference/com/mopub/volley/VolleyLog.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVolleyLog.h>
//other required types
#import <JavaKit/JavaThrowable.h>


@implementation MPDroidVolleyLog


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) setTagByTag: = setTag;
@bridge (method, static) wtfWithFormat:args: = wtf;
@bridge (method, static) wtfWithThrowable:format:args: = wtf;


@bridge (field, static) debug = "DEBUG";
@bridge (field, static) setDebug: = "DEBUG";


@end
