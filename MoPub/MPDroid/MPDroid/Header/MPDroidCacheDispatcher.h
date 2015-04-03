//
//  MPDroidCacheDispatcher.h
// 
//  Bridges to the java object com.mopub.volley.CacheDispatcher
//  See http://developer.android.com/reference/com/mopub/volley/CacheDispatcher.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaThread.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaBlockingQueue;
@protocol MPDroidResponseDelivery;
@protocol MPDroidCache;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCacheDispatcher
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.CacheDispatcher")
@interface MPDroidCacheDispatcher : JavaThread 

// constructors
- (instancetype)initWithBlockingQueue:(JavaObject <JavaBlockingQueue> *)cacheQueue blockingQueue:(JavaObject <JavaBlockingQueue> *)networkQueue cache:(JavaObject <MPDroidCache> *)cache responseDelivery:(JavaObject <MPDroidResponseDelivery> *)delivery; /* <init> */


// properties


//static valueless fields


// methods
- (void)quit; /* quit */
- (void)run; /* run */


@end
