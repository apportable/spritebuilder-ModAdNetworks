//
//  MPDroidMoPubEventsType.m
// 
//  Bridges to the java object com.mopub.common.event.MoPubEvents.Type
//  See http://developer.android.com/reference/com/mopub/common/event/MoPubEvents.Type.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubEventsType.h>
//other required types


@implementation MPDroidMoPubEventsType


//constructors


//properties
@bridge (field) mName = mName;



//methods
@bridge (field, static) adRequest = AD_REQUEST;

@bridge (field, static) impressionRequest = IMPRESSION_REQUEST;

@bridge (field, static) clickRequest = CLICK_REQUEST;

@bridge (field, static) positioningRequest = POSITIONING_REQUEST;

@bridge (field, static) adRequestError = AD_REQUEST_ERROR;

@bridge (field, static) trackingError = TRACKING_ERROR;

@bridge (field, static) impressionError = IMPRESSION_ERROR;

@bridge (field, static) clickError = CLICK_ERROR;

@bridge (field, static) conversionError = CONVERSION_ERROR;

@bridge (field, static) dataError = DATA_ERROR;



@end
