//
//  MPDroidVastManager.h
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastManager
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastManager.html for documentation.
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
@class MPDroidVastXmlManagerAggregator;
@protocol MPDroidVastManagerVastManagerListener;
@class MPDroidVastCompanionAd;
@class MPDroidVastVideoConfiguration;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidVastManagerAspectRatioWeight 0.000000
#define MPDroidVastManagerAreaWeight 0.000000

/**
Java class: MPDroidVastManager
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.vast.VastManager")
@interface MPDroidVastManager : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties


//static valueless fields


// methods
- (void)prepareVastVideoConfiguration:(NSString *)vastXml vastManagerListener:(JavaObject <MPDroidVastManagerVastManagerListener> *)vastManagerListener; /* prepareVastVideoConfiguration */
- (void)cancel; /* cancel */
- (void)onAggregationComplete:(JavaObject <JavaList> *)vastXmlManagers; /* onAggregationComplete */


@end
