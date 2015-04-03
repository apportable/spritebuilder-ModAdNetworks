//
//  MPDroidAdResponse.m
// 
//  Bridges to the java object com.mopub.network.AdResponse
//  See http://developer.android.com/reference/com/mopub/network/AdResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdResponse.h>
//other required types
#import <JavaKit/JavaJSONObject.h>
#import <MPDroid/MPDroidAdResponseBuilder.h>
#import <JavaKit/JavaInteger.h>
#import <JavaKit/JavaMap.h>


@implementation MPDroidAdResponse


//constructors


//properties
@bridge (instance, method) adType = getAdType;

@bridge (instance, method) impressionTrackingUrl = getImpressionTrackingUrl;

@bridge (instance, method) adUnitId = getAdUnitId;

@bridge (instance, method) failoverUrl = getFailoverUrl;

@bridge (instance, method) refreshTimeMillis = getRefreshTimeMillis;

@bridge (instance, method) fullAdType = getFullAdType;

@bridge (instance, method) stringBody = getStringBody;

@bridge (instance, method) adTimeoutMillis = getAdTimeoutMillis;

@bridge (instance, method) dspCreativeId = getDspCreativeId;

@bridge (instance, method) redirectUrl = getRedirectUrl;

@bridge (instance, method) timestamp = getTimestamp;

@bridge (instance, method) networkType = getNetworkType;

@bridge (instance, method) customEventClassName = getCustomEventClassName;

@bridge (instance, method) clickTrackingUrl = getClickTrackingUrl;

@bridge (instance, method) width = getWidth;

@bridge (instance, method) height = getHeight;

@bridge (instance, method) hasJson = hasJson;

@bridge (instance, method) serverExtras = getServerExtras;

@bridge (instance, method) toBuilder = toBuilder;

@bridge (instance, method) isScrollable = isScrollable;

@bridge (instance, method) jsonBody = getJsonBody;



//methods


@end
