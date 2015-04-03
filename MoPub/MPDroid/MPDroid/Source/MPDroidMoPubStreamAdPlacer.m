//
//  MPDroidMoPubStreamAdPlacer.m
// 
//  Bridges to the java object com.mopub.nativeads.MoPubStreamAdPlacer
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubStreamAdPlacer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubStreamAdPlacer.h>
//other required types
#import <MPDroid/MPDroidMoPubNativeAdLoadedListener.h>
#import <JavaKit/JavaHashMap.h>
#import <JavaKit/JavaWeakHashMap.h>
#import <AndroidKit/AndroidHandler.h>
#import <JavaKit/JavaRunnable.h>
#import <MPDroid/MPDroidRequestParameters.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h>
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubServerPositioning.h>
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidMoPubAdRenderer.h>
#import <MPDroid/MPDroidNativeResponse.h>
#import <AndroidKit/AndroidViewGroup.h>


@implementation MPDroidMoPubStreamAdPlacer


//constructors
@bridge (constructor) initWithContext:;
@bridge (constructor) initWithContext:moPubServerPositioning:;
@bridge (constructor) initWithContext:moPubClientPositioning:;


//properties
@bridge (instance, method) adViewTypeCount = getAdViewTypeCount;



//methods
@bridge (method, instance) registerAdRenderer: = registerAdRenderer;
@bridge (method, instance) setAdLoadedListener: = setAdLoadedListener;
@bridge (method, instance) loadAds: = loadAds;
@bridge (method, instance) loadAds:requestParameters: = loadAds;
@bridge (method, instance) placeAdsInRange:endPosition: = placeAdsInRange;
@bridge (method, instance) isAd: = isAd;
@bridge (method, instance) clearAds = clearAds;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) adDataForPosition: = getAdData;
@bridge (method, instance) adViewForPosition:view:viewGroup: = getAdView;
@bridge (method, instance) removeAdsInRange:originalEndPosition: = removeAdsInRange;
@bridge (method, instance) adViewTypeForPosition: = getAdViewType;
@bridge (method, instance) originalPositionForPosition: = getOriginalPosition;
@bridge (method, instance) adjustedPositionForOriginalPosition: = getAdjustedPosition;
@bridge (method, instance) originalCountForCount: = getOriginalCount;
@bridge (method, instance) adjustedCountForOriginalCount: = getAdjustedCount;
@bridge (method, instance) setItemCount: = setItemCount;
@bridge (method, instance) insertItem: = insertItem;
@bridge (method, instance) removeItem: = removeItem;
@bridge (method, instance) moveItem:newPosition: = moveItem;


@end
