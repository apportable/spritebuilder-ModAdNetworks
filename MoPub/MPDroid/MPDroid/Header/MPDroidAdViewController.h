//
//  MPDroidAdViewController.h
// 
//  Bridges to the java object com.mopub.mobileads.AdViewController
//  See http://developer.android.com/reference/com/mopub/mobileads/AdViewController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdResponse;
@class JavaWeakHashMap;
@class MPDroidMoPubView;
@class MPDroidAdReport;
@class MPDroidAdRequest;
@class AndroidHandler;
@protocol JavaRunnable;
@class MPDroidMoPubErrorCode;
@class AndroidContext;
@class MPDroidVolleyError;
@class AndroidFrameLayoutLayoutParams;
@class AndroidLocation;
@protocol MPDroidAdRequestListener;
@class MPDroidWebViewAdUrlGenerator;
@protocol JavaMap;
@class AndroidView;
@class JavaInteger;


//defines and their comments (static fields with values)
#define MPDroidAdViewControllerDefaultRefreshTimeMilliseconds 60000
#define MPDroidAdViewControllerMaxRefreshTimeMilliseconds 600000
#define MPDroidAdViewControllerBackoffFactor 0.000000

/**
Java class: MPDroidAdViewController
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.AdViewController")
@interface MPDroidAdViewController : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context moPubView:(MPDroidMoPubView *)view; /* <init> */


// properties
@property (nonatomic, retain) AndroidLocation *location; /* getLocation, setLocation */
@property (nonatomic, readonly, assign) int32_t adWidth; /* getAdWidth */
@property (nonatomic, assign) BOOL testing; /* getTesting, setTesting */
@property (nonatomic, readonly, retain) MPDroidMoPubView *moPubView; /* getMoPubView */
@property (nonatomic, copy) NSString *keywords; /* getKeywords, setKeywords */
@property (nonatomic, readonly, assign) int32_t adHeight; /* getAdHeight */
@property (nonatomic, readonly, assign) int64_t broadcastIdentifier; /* getBroadcastIdentifier */
@property (nonatomic, readonly, retain) MPDroidAdReport *adReport; /* getAdReport */
@property (nonatomic, readonly, assign) BOOL autorefreshEnabled; /* getAutorefreshEnabled */
@property (nonatomic, copy) NSString *adUnitId; /* getAdUnitId, setAdUnitId */


//static valueless fields


// methods
+ (void)setShouldHonorServerDimensionsByView:(AndroidView *)view; /* setShouldHonorServerDimensions */
- (void)loadAd; /* loadAd */
- (void)reload; /* reload */
- (void)setTimeout:(int32_t)milliseconds; /* setTimeout */


@end
