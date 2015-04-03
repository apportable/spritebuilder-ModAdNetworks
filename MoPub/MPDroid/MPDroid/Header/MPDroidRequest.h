//
//  MPDroidRequest.h
// 
//  Bridges to the java object com.mopub.volley.Request
//  See http://developer.android.com/reference/com/mopub/volley/Request.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaComparable.h>


//necessary forward declarations, classes and protocols
@class MPDroidNetworkResponse;
@protocol MPDroidRetryPolicy;
@class MPDroidVolleyError;
@class MPDroidResponse;
@class MPDroidRequestPriority;
@protocol MPDroidResponseErrorListener;
@protocol JavaMap;
@class MPDroidRequestQueue;
@class JavaInteger;
@class MPDroidCacheEntry;


//defines and their comments (static fields with values)
#define MPDroidRequestDefaultParamsEncoding @"UTF-8"
#define MPDroidRequestSlowRequestThresholdMs 3000ll

/**
Java class: MPDroidRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.Request")
@interface MPDroidRequest : JavaObject <JavaComparable>

// constructors
- (instancetype)initWithUrl:(NSString *)url errorListener:(JavaObject <MPDroidResponseErrorListener> *)listener; /* <init> */
- (instancetype)initWithMethod:(int32_t)method url:(NSString *)url errorListener:(JavaObject <MPDroidResponseErrorListener> *)listener; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSData *body; /* getBody */
@property (nonatomic, readonly, retain) JavaObject <JavaMap> *headers; /* getHeaders */
@property (nonatomic, readonly, assign) int32_t trafficStatsTag; /* getTrafficStatsTag */
@property (nonatomic, readonly, retain) JavaObject <MPDroidRetryPolicy> *retryPolicy; /* getRetryPolicy */
@property (nonatomic, readonly, copy) NSString *cacheKey; /* getCacheKey */
@property (nonatomic, readonly, copy) NSString *url; /* getUrl */
@property (nonatomic, readonly, retain) MPDroidRequestPriority *priority; /* getPriority */
@property (nonatomic, readonly, getter=isCanceled, assign) BOOL canceled; /* isCanceled */
@property (nonatomic, readonly, assign) BOOL hasHadResponseDelivered; /* hasHadResponseDelivered */
@property (nonatomic, readonly, retain) MPDroidCacheEntry *cacheEntry; /* getCacheEntry */
@property (nonatomic, readonly, retain) JavaObject *tag; /* getTag */
@property (nonatomic, readonly, assign) int32_t timeoutMs; /* getTimeoutMs */
@property (nonatomic, readonly, retain) JavaObject <MPDroidResponseErrorListener> *errorListener; /* getErrorListener */
@property (nonatomic, readonly, copy) NSString *bodyContentType; /* getBodyContentType */
@property (nonatomic, readonly, assign) int32_t sequence; /* getSequence */
@property (nonatomic, readonly, assign) int32_t method; /* getMethod */


//static valueless fields


// methods
- (MPDroidRequest *)setTagByTag:(JavaObject *)tag; /* setTag */
- (MPDroidRequest *)setRetryPolicyByRetryPolicy:(JavaObject <MPDroidRetryPolicy> *)retryPolicy; /* setRetryPolicy */
- (void)addMarker:(NSString *)tag; /* addMarker */
- (MPDroidRequest *)setRequestQueueByRequestQueue:(MPDroidRequestQueue *)requestQueue; /* setRequestQueue */
- (MPDroidRequest *)setSequenceBySequence:(int32_t)sequence; /* setSequence */
- (MPDroidRequest *)setCacheEntryByEntry:(MPDroidCacheEntry *)entry; /* setCacheEntry */
- (void)cancel; /* cancel */
- (MPDroidRequest *)setShouldCacheByShouldCache:(BOOL)shouldCache; /* setShouldCache */
- (BOOL)shouldCache; /* shouldCache */
- (void)markDelivered; /* markDelivered */
- (void)deliverError:(MPDroidVolleyError *)error; /* deliverError */
- (int32_t)compareTo:(MPDroidRequest *)other; /* compareTo */
- (NSString *)description; /* toString */


@end
