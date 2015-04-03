//
//  MPDroidCache.m
// 
//  An adapter to the java interface com.mopub.volley.Cache
//  See http://developer.android.com/reference/com/mopub/volley/Cache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCache.h>
//other required types
#import <MPDroid/MPDroidCacheEntry.h>


@implementation MPDroidCache

//properties
@bridge (method, instance) cacheEntryForKey: = get;
@bridge (method, instance) clear = clear;
@bridge (method, instance) initialize = initialize;
@bridge (method, instance) invalidateWithKey:fullExpire: = invalidate;
@bridge (method, instance) putWithKey:entry: = put;
@bridge (method, instance) removeWithKey: = remove;


//methods


//convenience class method


//dealloc method


@end
