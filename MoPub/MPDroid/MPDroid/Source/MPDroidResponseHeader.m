//
//  MPDroidResponseHeader.m
// 
//  Bridges to the java object com.mopub.common.util.ResponseHeader
//  See http://developer.android.com/reference/com/mopub/common/util/ResponseHeader.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidResponseHeader.h>
//other required types


@implementation MPDroidResponseHeader


//constructors


//properties
@bridge (instance, method) key = getKey;



//methods
@bridge (field, static) adTimeout = AD_TIMEOUT;

@bridge (field, static) adType = AD_TYPE;

@bridge (field, static) clickTrackingUrl = CLICK_TRACKING_URL;

@bridge (field, static) customEventData = CUSTOM_EVENT_DATA;

@bridge (field, static) customEventName = CUSTOM_EVENT_NAME;

@bridge (field, static) customEventHtmlData = CUSTOM_EVENT_HTML_DATA;

@bridge (field, static) dspCreativeId = DSP_CREATIVE_ID;

@bridge (field, static) failUrl = FAIL_URL;

@bridge (field, static) fullAdType = FULL_AD_TYPE;

@bridge (field, static) height = HEIGHT;

@bridge (field, static) impressionUrl = IMPRESSION_URL;

@bridge (field, static) redirectUrl = REDIRECT_URL;

@bridge (field, static) nativeParams = NATIVE_PARAMS;

@bridge (field, static) networkType = NETWORK_TYPE;

@bridge (field, static) refreshTime = REFRESH_TIME;

@bridge (field, static) scrollable = SCROLLABLE;

@bridge (field, static) warmup = WARMUP;

@bridge (field, static) width = WIDTH;

@bridge (field, static) location = LOCATION;

@bridge (field, static) userAgent = USER_AGENT;

@bridge (field, static) customSelector = CUSTOM_SELECTOR;



@end
