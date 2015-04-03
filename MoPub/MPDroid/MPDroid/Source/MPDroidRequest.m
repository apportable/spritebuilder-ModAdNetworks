//
//  MPDroidRequest.m
// 
//  Bridges to the java object com.mopub.volley.Request
//  See http://developer.android.com/reference/com/mopub/volley/Request.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidRequest.h>
//other required types
#import <MPDroid/MPDroidNetworkResponse.h>
#import <MPDroid/MPDroidRetryPolicy.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidRequestPriority.h>
#import <MPDroid/MPDroidResponseErrorListener.h>
#import <JavaKit/JavaMap.h>
#import <MPDroid/MPDroidRequestQueue.h>
#import <JavaKit/JavaInteger.h>
#import <MPDroid/MPDroidCacheEntry.h>


@implementation MPDroidRequest


//constructors
@bridge (constructor) initWithUrl:errorListener:;
@bridge (constructor) initWithMethod:url:errorListener:;


//properties
@bridge (instance, method) body = getBody;

@bridge (instance, method) headers = getHeaders;

@bridge (instance, method) trafficStatsTag = getTrafficStatsTag;

@bridge (instance, method) retryPolicy = getRetryPolicy;

@bridge (instance, method) cacheKey = getCacheKey;

@bridge (instance, method) url = getUrl;

@bridge (instance, method) priority = getPriority;

@bridge (instance, method) isCanceled = isCanceled;

@bridge (instance, method) hasHadResponseDelivered = hasHadResponseDelivered;

@bridge (instance, method) cacheEntry = getCacheEntry;

@bridge (instance, method) tag = getTag;

@bridge (instance, method) timeoutMs = getTimeoutMs;

@bridge (instance, method) errorListener = getErrorListener;

@bridge (instance, method) bodyContentType = getBodyContentType;

@bridge (instance, method) sequence = getSequence;

@bridge (instance, method) method = getMethod;



//methods
@bridge (method, instance) setTagByTag: = setTag;
@bridge (method, instance) setRetryPolicyByRetryPolicy: = setRetryPolicy;
@bridge (method, instance) addMarker: = addMarker;
@bridge (method, instance) setRequestQueueByRequestQueue: = setRequestQueue;
@bridge (method, instance) setSequenceBySequence: = setSequence;
@bridge (method, instance) setCacheEntryByEntry: = setCacheEntry;
@bridge (method, instance) cancel = cancel;
@bridge (method, instance) setShouldCacheByShouldCache: = setShouldCache;
@bridge (method, instance) shouldCache = shouldCache;
@bridge (method, instance) markDelivered = markDelivered;
@bridge (method, instance) deliverError: = deliverError;
@bridge (method, instance) compareTo: = compareTo;
@bridge (method, instance) description = toString;


@end
