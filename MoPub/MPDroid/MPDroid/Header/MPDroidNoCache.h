//
//  MPDroidNoCache.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.NoCache
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/NoCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidCache.h>


//necessary forward declarations, classes and protocols
@class MPDroidCacheEntry;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNoCache
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.NoCache")
@interface MPDroidNoCache : JavaObject <MPDroidCache>

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)clear; /* clear */
- (MPDroidCacheEntry *)cacheEntryForKey:(NSString *)key; /* get */
- (void)putWithKey:(NSString *)key entry:(MPDroidCacheEntry *)entry; /* put */
- (void)invalidateWithKey:(NSString *)key fullExpire:(BOOL)fullExpire; /* invalidate */
- (void)removeWithKey:(NSString *)key; /* remove */
- (void)initialize; /* initialize */


@end
