//
//  MPDroidNativeResponse.m
// 
//  Bridges to the java object com.mopub.nativeads.NativeResponse
//  See http://developer.android.com/reference/com/mopub/nativeads/NativeResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNativeResponse.h>
//other required types
#import <JavaKit/JavaList.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeEventListener.h>
#import <MPDroid/MPDroidImageLoader.h>
#import <AndroidKit/AndroidView.h>
#import <AndroidKit/AndroidImageView.h>
#import <JavaKit/JavaMap.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidViewOnClickListener.h>
#import <JavaKit/JavaSet.h>
#import <JavaKit/JavaDouble.h>


@implementation MPDroidNativeResponse


//constructors


//properties
@bridge (instance, method) impressionTrackers = getImpressionTrackers;

@bridge (instance, method) extras = getExtras;

@bridge (instance, method) impressionMinPercentageViewed = getImpressionMinPercentageViewed;

@bridge (instance, method) adUnitId = getAdUnitId;

@bridge (instance, method) recordedImpression = getRecordedImpression;

@bridge (instance, method) isOverridingClickTracker = isOverridingClickTracker;

@bridge (instance, method) mainImageUrl = getMainImageUrl;

@bridge (instance, method) clickTracker = getClickTracker;

@bridge (instance, method) title = getTitle;

@bridge (instance, method) impressionMinTimeViewed = getImpressionMinTimeViewed;

@bridge (instance, method) starRating = getStarRating;

@bridge (instance, method) iconImageUrl = getIconImageUrl;

@bridge (instance, method) text = getText;

@bridge (instance, method) isOverridingImpressionTracker = isOverridingImpressionTracker;

@bridge (instance, method) isClicked = isClicked;

@bridge (instance, method) callToAction = getCallToAction;

@bridge (instance, method) clickDestinationUrl = getClickDestinationUrl;

@bridge (instance, method) isDestroyed = isDestroyed;



//methods
@bridge (method, instance) description = toString;
@bridge (method, instance) extraForKey: = getExtra;
@bridge (method, instance) prepareWithView: = prepare;
@bridge (method, instance) recordImpression: = recordImpression;
@bridge (method, instance) handleClick: = handleClick;
@bridge (method, instance) clearWithView: = clear;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) loadMainImage: = loadMainImage;
@bridge (method, instance) loadIconImage: = loadIconImage;
@bridge (method, instance) loadExtrasImage:imageView: = loadExtrasImage;


@end
