//
//  MPDroidVastVideoConfiguration.h
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastVideoConfiguration
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastVideoConfiguration.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaSerializable.h>


//necessary forward declarations, classes and protocols
@class JavaArrayList;
@protocol JavaList;
@class MPDroidVastCompanionAd;


//defines and their comments (static fields with values)
#define MPDroidVastVideoConfigurationSerialversionuid 0ll

/**
Java class: MPDroidVastVideoConfiguration
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.vast.VastVideoConfiguration")
@interface MPDroidVastVideoConfiguration : JavaObject <JavaSerializable>

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, copy) NSString *networkMediaFileUrl; /* getNetworkMediaFileUrl, setNetworkMediaFileUrl */
@property (nonatomic, copy) NSString *clickThroughUrl; /* getClickThroughUrl, setClickThroughUrl */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *clickTrackers; /* getClickTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *thirdQuartileTrackers; /* getThirdQuartileTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *midpointTrackers; /* getMidpointTrackers */
@property (nonatomic, retain) MPDroidVastCompanionAd *vastCompanionAd; /* getVastCompanionAd, setVastCompanionAd */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *startTrackers; /* getStartTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *impressionTrackers; /* getImpressionTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *completeTrackers; /* getCompleteTrackers */
@property (nonatomic, readonly, retain) JavaObject <JavaList> *firstQuartileTrackers; /* getFirstQuartileTrackers */
@property (nonatomic, copy) NSString *diskMediaFileUrl; /* getDiskMediaFileUrl, setDiskMediaFileUrl */


//static valueless fields


// methods
- (void)addImpressionTrackers:(JavaObject <JavaList> *)impressionTrackers; /* addImpressionTrackers */
- (void)addStartTrackers:(JavaObject <JavaList> *)startTrackers; /* addStartTrackers */
- (void)addFirstQuartileTrackers:(JavaObject <JavaList> *)firstQuartileTrackers; /* addFirstQuartileTrackers */
- (void)addMidpointTrackers:(JavaObject <JavaList> *)midpointTrackers; /* addMidpointTrackers */
- (void)addThirdQuartileTrackers:(JavaObject <JavaList> *)thirdQuartileTrackers; /* addThirdQuartileTrackers */
- (void)addCompleteTrackers:(JavaObject <JavaList> *)completeTrackers; /* addCompleteTrackers */
- (void)addClickTrackers:(JavaObject <JavaList> *)clickTrackers; /* addClickTrackers */


@end
