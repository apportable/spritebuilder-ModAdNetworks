//
//  MPDroidNoCache.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.NoCache
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/NoCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNoCache.h>
//other required types
#import <MPDroid/MPDroidCacheEntry.h>


@implementation MPDroidNoCache


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) clear = clear;
@bridge (method, instance) cacheEntryForKey: = get;
@bridge (method, instance) putWithKey:entry: = put;
@bridge (method, instance) invalidateWithKey:fullExpire: = invalidate;
@bridge (method, instance) removeWithKey: = remove;
@bridge (method, instance) initialize = initialize;


@end
