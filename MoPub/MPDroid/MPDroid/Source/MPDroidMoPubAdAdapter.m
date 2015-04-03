//
//  MPDroidMoPubAdAdapter.m
// 
//  Bridges to the java object com.mopub.nativeads.MoPubAdAdapter
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubAdAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubAdAdapter.h>
//other required types
#import <AndroidKit/AndroidAdapterViewOnItemSelectedListener.h>
#import <MPDroid/MPDroidMoPubNativeAdLoadedListener.h>
#import <AndroidKit/AndroidAdapterViewOnItemClickListener.h>
#import <AndroidKit/AndroidAdapterViewOnItemLongClickListener.h>
#import <JavaKit/JavaWeakHashMap.h>
#import <MPDroid/MPDroidRequestParameters.h>
#import <JavaKit/JavaList.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h>
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubServerPositioning.h>
#import <AndroidKit/AndroidAdapter.h>
#import <AndroidKit/AndroidListView.h>
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidMoPubAdRenderer.h>
#import <AndroidKit/AndroidViewGroup.h>
#import <MPDroid/MPDroidMoPubStreamAdPlacer.h>


@implementation MPDroidMoPubAdAdapter


//constructors
@bridge (constructor) initWithContext:adapter:;
@bridge (constructor) initWithContext:adapter:moPubServerPositioning:;
@bridge (constructor) initWithContext:adapter:moPubClientPositioning:;


//properties
@bridge (instance, method) viewTypeCount = getViewTypeCount;

@bridge (instance, method) isEmpty = isEmpty;

@bridge (instance, method) count = getCount;

@bridge (instance, method) areAllItemsEnabled = areAllItemsEnabled;

@bridge (instance, method) hasStableIds = hasStableIds;



//methods
@bridge (method, instance) registerAdRenderer: = registerAdRenderer;
@bridge (method, instance) setAdLoadedListener: = setAdLoadedListener;
@bridge (method, instance) loadAds: = loadAds;
@bridge (method, instance) loadAds:requestParameters: = loadAds;
@bridge (method, instance) isAd: = isAd;
@bridge (method, instance) clearAds = clearAds;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) isEnabled: = isEnabled;
@bridge (method, instance) itemForPosition: = getItem;
@bridge (method, instance) itemIdForPosition: = getItemId;
@bridge (method, instance) viewForPosition:view:viewGroup: = getView;
@bridge (method, instance) itemViewTypeForPosition: = getItemViewType;
@bridge (method, instance) originalPositionForPosition: = getOriginalPosition;
@bridge (method, instance) adjustedPositionForOriginalPosition: = getAdjustedPosition;
@bridge (method, instance) insertItem: = insertItem;
@bridge (method, instance) removeItem: = removeItem;
@bridge (method, instance) setOnClickListener:onItemClickListener: = setOnClickListener;
@bridge (method, instance) setOnItemLongClickListener:onItemLongClickListener: = setOnItemLongClickListener;
@bridge (method, instance) setOnItemSelectedListener:onItemSelectedListener: = setOnItemSelectedListener;
@bridge (method, instance) setSelection:originalPosition: = setSelection;
@bridge (method, instance) smoothScrollToPosition:originalPosition: = smoothScrollToPosition;
@bridge (method, instance) refreshAds:adUnitId: = refreshAds;
@bridge (method, instance) refreshAds:adUnitId:requestParameters: = refreshAds;


@end
