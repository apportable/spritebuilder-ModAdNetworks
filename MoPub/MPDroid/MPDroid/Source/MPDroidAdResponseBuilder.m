//
//  MPDroidAdResponseBuilder.m
// 
//  Bridges to the java object com.mopub.network.AdResponse.Builder
//  See http://developer.android.com/reference/com/mopub/network/AdResponse.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdResponseBuilder.h>
//other required types
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaJSONObject.h>
#import <JavaKit/JavaBoolean.h>
#import <JavaKit/JavaInteger.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidAdResponseBuilder


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) build = build;



//methods
@bridge (method, instance) setAdTypeByAdType: = setAdType;
@bridge (method, instance) setAdUnitIdByAdUnitId: = setAdUnitId;
@bridge (method, instance) setFullAdTypeByFullAdType: = setFullAdType;
@bridge (method, instance) setNetworkTypeByNetworkType: = setNetworkType;
@bridge (method, instance) setRedirectUrlByRedirectUrl: = setRedirectUrl;
@bridge (method, instance) setClickTrackingUrlByClickTrackingUrl: = setClickTrackingUrl;
@bridge (method, instance) setImpressionTrackingUrlByImpressionTrackingUrl: = setImpressionTrackingUrl;
@bridge (method, instance) setFailoverUrlByFailoverUrl: = setFailoverUrl;
@bridge (method, instance) setDimensions:integer: = setDimensions;
@bridge (method, instance) setAdTimeoutDelayMillisecondsByInteger: = setAdTimeoutDelayMilliseconds;
@bridge (method, instance) setRefreshTimeMillisecondsByInteger: = setRefreshTimeMilliseconds;
@bridge (method, instance) setScrollableByBoolean: = setScrollable;
@bridge (method, instance) setDspCreativeIdByDspCreativeId: = setDspCreativeId;
@bridge (method, instance) setResponseBodyByResponseBody: = setResponseBody;
@bridge (method, instance) setJsonBodyByJSONObject: = setJsonBody;
@bridge (method, instance) setCustomEventClassNameByCustomEventClassName: = setCustomEventClassName;
@bridge (method, instance) setServerExtrasByMap: = setServerExtras;


@end
