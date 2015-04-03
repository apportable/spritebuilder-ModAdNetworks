//
//  MPDroidRequestQueue.h
// 
//  Bridges to the java object com.mopub.volley.RequestQueue
//  See http://developer.android.com/reference/com/mopub/volley/RequestQueue.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidRequestQueueRequestFilter;
@class MPDroidRequest;
@protocol MPDroidResponseDelivery;
@class MPDroidNetworkDispatcher;
@protocol MPDroidCache;
@protocol JavaMap;
@class JavaAtomicInteger;
@protocol MPDroidNetwork;
@protocol JavaSet;
@class JavaPriorityBlockingQueue;
@class MPDroidCacheDispatcher;


//defines and their comments (static fields with values)
#define MPDroidRequestQueueDefaultNetworkThreadPoolSize 4

/**
Java class: MPDroidRequestQueue
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.RequestQueue")
@interface MPDroidRequestQueue : JavaObject 

// constructors
- (instancetype)initWithCache:(JavaObject <MPDroidCache> *)cache network:(JavaObject <MPDroidNetwork> *)network threadPoolSize:(int32_t)threadPoolSize responseDelivery:(JavaObject <MPDroidResponseDelivery> *)delivery; /* <init> */
- (instancetype)initWithCache:(JavaObject <MPDroidCache> *)cache network:(JavaObject <MPDroidNetwork> *)network threadPoolSize:(int32_t)threadPoolSize; /* <init> */
- (instancetype)initWithCache:(JavaObject <MPDroidCache> *)cache network:(JavaObject <MPDroidNetwork> *)network; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaObject <MPDroidCache> *cache; /* getCache */
@property (nonatomic, readonly, assign) int32_t sequenceNumber; /* getSequenceNumber */


//static valueless fields


// methods
- (void)start; /* start */
- (void)stop; /* stop */
- (void)cancelAll:(JavaObject <MPDroidRequestQueueRequestFilter> *)filter; /* cancelAll */
// Duplicated: - (void)cancelAll:(JavaObject *)tag; /* cancelAll */
- (MPDroidRequest *)addWithRequest:(MPDroidRequest *)request; /* add */


@end
