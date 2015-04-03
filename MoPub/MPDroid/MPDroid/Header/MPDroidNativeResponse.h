//
//  MPDroidNativeResponse.h
// 
//  Bridges to the java object com.mopub.nativeads.NativeResponse
//  See http://developer.android.com/reference/com/mopub/nativeads/NativeResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaList;
@protocol MPDroidMoPubNativeMoPubNativeEventListener;
@class MPDroidImageLoader;
@class AndroidView;
@class AndroidImageView;
@protocol JavaMap;
@class AndroidContext;
@protocol AndroidViewOnClickListener;
@protocol JavaSet;
@class JavaDouble;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNativeResponse
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.NativeResponse")
@interface MPDroidNativeResponse : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, retain) JavaObject <JavaList> *impressionTrackers; /* getImpressionTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaMap> *extras; /* getExtras */
@property (nonatomic, readonly, assign) int32_t impressionMinPercentageViewed; /* getImpressionMinPercentageViewed */
@property (nonatomic, readonly, copy) NSString *adUnitId; /* getAdUnitId */
@property (nonatomic, readonly, assign) BOOL recordedImpression; /* getRecordedImpression */
@property (nonatomic, readonly, getter=isOverridingClickTracker, assign) BOOL overridingClickTracker; /* isOverridingClickTracker */
@property (nonatomic, readonly, copy) NSString *mainImageUrl; /* getMainImageUrl */
@property (nonatomic, readonly, copy) NSString *clickTracker; /* getClickTracker */
@property (nonatomic, readonly, copy) NSString *title; /* getTitle */
@property (nonatomic, readonly, assign) int32_t impressionMinTimeViewed; /* getImpressionMinTimeViewed */
@property (nonatomic, readonly, retain) JavaDouble *starRating; /* getStarRating */
@property (nonatomic, readonly, copy) NSString *iconImageUrl; /* getIconImageUrl */
@property (nonatomic, readonly, copy) NSString *text; /* getText */
@property (nonatomic, readonly, getter=isOverridingImpressionTracker, assign) BOOL overridingImpressionTracker; /* isOverridingImpressionTracker */
@property (nonatomic, readonly, getter=isClicked, assign) BOOL clicked; /* isClicked */
@property (nonatomic, readonly, copy) NSString *callToAction; /* getCallToAction */
@property (nonatomic, readonly, copy) NSString *clickDestinationUrl; /* getClickDestinationUrl */
@property (nonatomic, readonly, getter=isDestroyed, assign) BOOL destroyed; /* isDestroyed */


//static valueless fields


// methods
- (NSString *)description; /* toString */
- (JavaObject *)extraForKey:(NSString *)key; /* getExtra */
- (void)prepareWithView:(AndroidView *)view; /* prepare */
- (void)recordImpression:(AndroidView *)view; /* recordImpression */
- (void)handleClick:(AndroidView *)view; /* handleClick */
- (void)clearWithView:(AndroidView *)view; /* clear */
- (void)destroy; /* destroy */
- (void)loadMainImage:(AndroidImageView *)imageView; /* loadMainImage */
- (void)loadIconImage:(AndroidImageView *)imageView; /* loadIconImage */
- (void)loadExtrasImage:(NSString *)key imageView:(AndroidImageView *)imageView; /* loadExtrasImage */


@end
