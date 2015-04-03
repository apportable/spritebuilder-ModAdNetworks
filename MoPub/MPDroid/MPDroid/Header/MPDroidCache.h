//
//  MPDroidCache.h
// 
//  Bridges to the java interface com.mopub.volley.Cache
//  See http://developer.android.com/reference/com/mopub/volley/Cache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidCacheEntry;


//static fields


/**
Java interface: MPDroidCache
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.Cache")
@protocol MPDroidCache 

// properties


// methods
- (MPDroidCacheEntry *)cacheEntryForKey:(NSString *)key; /* get */
- (void)putWithKey:(NSString *)key entry:(MPDroidCacheEntry *)entry; /* put */
- (void)initialize; /* initialize */
- (void)invalidateWithKey:(NSString *)key fullExpire:(BOOL)fullExpire; /* invalidate */
- (void)removeWithKey:(NSString *)key; /* remove */
- (void)clear; /* clear */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.Cache")
@interface MPDroidCache : JavaObject <MPDroidCache>

//properties for handlers


//convenience class method


@end