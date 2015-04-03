//
//  MPDroidMoPubStreamAdPlacer.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubStreamAdPlacer
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubStreamAdPlacer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMoPubNativeAdLoadedListener;
@class JavaHashMap;
@class JavaWeakHashMap;
@class AndroidHandler;
@protocol JavaRunnable;
@class MPDroidRequestParameters;
@class AndroidContext;
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;
@class MPDroidMoPubNativeAdPositioningMoPubServerPositioning;
@class AndroidView;
@protocol MPDroidMoPubAdRenderer;
@class MPDroidNativeResponse;
@class AndroidViewGroup;


//defines and their comments (static fields with values)
#define MPDroidMoPubStreamAdPlacerContentViewType 0
#define MPDroidMoPubStreamAdPlacerMaxVisibleRange 100
#define MPDroidMoPubStreamAdPlacerRangeBuffer 10

/**
Java class: MPDroidMoPubStreamAdPlacer
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubStreamAdPlacer")
@interface MPDroidMoPubStreamAdPlacer : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context moPubServerPositioning:(MPDroidMoPubNativeAdPositioningMoPubServerPositioning *)adPositioning; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context moPubClientPositioning:(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)adPositioning; /* <init> */


// properties
@property (nonatomic, readonly, assign) int32_t adViewTypeCount; /* getAdViewTypeCount */


//static valueless fields


// methods
- (void)registerAdRenderer:(JavaObject <MPDroidMoPubAdRenderer> *)adRenderer; /* registerAdRenderer */
- (void)setAdLoadedListener:(JavaObject <MPDroidMoPubNativeAdLoadedListener> *)listener; /* setAdLoadedListener */
- (void)loadAds:(NSString *)adUnitId; /* loadAds */
- (void)loadAds:(NSString *)adUnitId requestParameters:(MPDroidRequestParameters *)requestParameters; /* loadAds */
- (void)placeAdsInRange:(int32_t)startPosition endPosition:(int32_t)endPosition; /* placeAdsInRange */
- (BOOL)isAd:(int32_t)position; /* isAd */
- (void)clearAds; /* clearAds */
- (void)destroy; /* destroy */
- (JavaObject *)adDataForPosition:(int32_t)position; /* getAdData */
- (AndroidView *)adViewForPosition:(int32_t)position view:(AndroidView *)convertView viewGroup:(AndroidViewGroup *)parent; /* getAdView */
- (int32_t)removeAdsInRange:(int32_t)originalStartPosition originalEndPosition:(int32_t)originalEndPosition; /* removeAdsInRange */
- (int32_t)adViewTypeForPosition:(int32_t)position; /* getAdViewType */
- (int32_t)originalPositionForPosition:(int32_t)position; /* getOriginalPosition */
- (int32_t)adjustedPositionForOriginalPosition:(int32_t)originalPosition; /* getAdjustedPosition */
- (int32_t)originalCountForCount:(int32_t)count; /* getOriginalCount */
- (int32_t)adjustedCountForOriginalCount:(int32_t)originalCount; /* getAdjustedCount */
- (void)setItemCount:(int32_t)originalCount; /* setItemCount */
- (void)insertItem:(int32_t)originalPosition; /* insertItem */
- (void)removeItem:(int32_t)originalPosition; /* removeItem */
- (void)moveItem:(int32_t)originalPosition newPosition:(int32_t)newPosition; /* moveItem */


@end
