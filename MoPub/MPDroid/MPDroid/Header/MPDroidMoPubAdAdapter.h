//
//  MPDroidMoPubAdAdapter.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubAdAdapter
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubAdAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidBaseAdapter.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol AndroidAdapterViewOnItemSelectedListener;
@protocol MPDroidMoPubNativeAdLoadedListener;
@protocol AndroidAdapterViewOnItemClickListener;
@protocol AndroidAdapterViewOnItemLongClickListener;
@class JavaWeakHashMap;
@class MPDroidRequestParameters;
@protocol JavaList;
@class AndroidContext;
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;
@class MPDroidMoPubNativeAdPositioningMoPubServerPositioning;
@protocol AndroidAdapter;
@class AndroidListView;
@class AndroidView;
@protocol MPDroidMoPubAdRenderer;
@class AndroidViewGroup;
@class MPDroidMoPubStreamAdPlacer;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubAdAdapter
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubAdAdapter")
@interface MPDroidMoPubAdAdapter : AndroidBaseAdapter 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adapter:(JavaObject <AndroidAdapter> *)originalAdapter; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context adapter:(JavaObject <AndroidAdapter> *)originalAdapter moPubServerPositioning:(MPDroidMoPubNativeAdPositioningMoPubServerPositioning *)adPositioning; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context adapter:(JavaObject <AndroidAdapter> *)originalAdapter moPubClientPositioning:(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)adPositioning; /* <init> */


// properties
@property (nonatomic, readonly, assign) int32_t viewTypeCount; /* getViewTypeCount */
@property (nonatomic, readonly, getter=isEmpty, assign) BOOL empty; /* isEmpty */
@property (nonatomic, readonly, assign) int32_t count; /* getCount */
@property (nonatomic, readonly, assign) BOOL areAllItemsEnabled; /* areAllItemsEnabled */
@property (nonatomic, readonly, assign) BOOL hasStableIds; /* hasStableIds */


//static valueless fields


// methods
- (void)registerAdRenderer:(JavaObject <MPDroidMoPubAdRenderer> *)adRenderer; /* registerAdRenderer */
- (void)setAdLoadedListener:(JavaObject <MPDroidMoPubNativeAdLoadedListener> *)listener; /* setAdLoadedListener */
- (void)loadAds:(NSString *)adUnitId; /* loadAds */
- (void)loadAds:(NSString *)adUnitId requestParameters:(MPDroidRequestParameters *)requestParameters; /* loadAds */
- (BOOL)isAd:(int32_t)position; /* isAd */
- (void)clearAds; /* clearAds */
- (void)destroy; /* destroy */
- (BOOL)isEnabled:(int32_t)position; /* isEnabled */
- (JavaObject *)itemForPosition:(int32_t)position; /* getItem */
- (int64_t)itemIdForPosition:(int32_t)position; /* getItemId */
- (AndroidView *)viewForPosition:(int32_t)position view:(AndroidView *)view viewGroup:(AndroidViewGroup *)viewGroup; /* getView */
- (int32_t)itemViewTypeForPosition:(int32_t)position; /* getItemViewType */
- (int32_t)originalPositionForPosition:(int32_t)position; /* getOriginalPosition */
- (int32_t)adjustedPositionForOriginalPosition:(int32_t)originalPosition; /* getAdjustedPosition */
- (void)insertItem:(int32_t)originalPosition; /* insertItem */
- (void)removeItem:(int32_t)originalPosition; /* removeItem */
- (void)setOnClickListener:(AndroidListView *)listView onItemClickListener:(JavaObject <AndroidAdapterViewOnItemClickListener> *)listener; /* setOnClickListener */
- (void)setOnItemLongClickListener:(AndroidListView *)listView onItemLongClickListener:(JavaObject <AndroidAdapterViewOnItemLongClickListener> *)listener; /* setOnItemLongClickListener */
- (void)setOnItemSelectedListener:(AndroidListView *)listView onItemSelectedListener:(JavaObject <AndroidAdapterViewOnItemSelectedListener> *)listener; /* setOnItemSelectedListener */
- (void)setSelection:(AndroidListView *)listView originalPosition:(int32_t)originalPosition; /* setSelection */
- (void)smoothScrollToPosition:(AndroidListView *)listView originalPosition:(int32_t)originalPosition; /* smoothScrollToPosition */
- (void)refreshAds:(AndroidListView *)listView adUnitId:(NSString *)adUnitId; /* refreshAds */
- (void)refreshAds:(AndroidListView *)listView adUnitId:(NSString *)adUnitId requestParameters:(MPDroidRequestParameters *)requestParameters; /* refreshAds */


@end
