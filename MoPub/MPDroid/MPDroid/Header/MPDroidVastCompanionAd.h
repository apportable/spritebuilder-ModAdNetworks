//
//  MPDroidVastCompanionAd.h
// 
//  Bridges to the java object com.mopub.mobileads.util.vast.VastCompanionAd
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastCompanionAd.html for documentation.
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
@class JavaInteger;
@protocol JavaList;


//defines and their comments (static fields with values)
#define MPDroidVastCompanionAdSerialversionuid 0ll

/**
Java class: MPDroidVastCompanionAd
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.vast.VastCompanionAd")
@interface MPDroidVastCompanionAd : JavaObject <JavaSerializable>

// constructors
- (instancetype)initWithInteger:(JavaInteger *)width integer:(JavaInteger *)height imageUrl:(NSString *)imageUrl clickThroughUrl:(NSString *)clickThroughUrl arrayList:(JavaArrayList *)clickTrackers; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaObject <JavaList> *clickTrackers; /* getClickTrackers */
@property (nonatomic, readonly, copy) NSString *imageUrl; /* getImageUrl */
@property (nonatomic, readonly, retain) JavaInteger *width; /* getWidth */
@property (nonatomic, readonly, retain) JavaInteger *height; /* getHeight */
@property (nonatomic, readonly, copy) NSString *clickThroughUrl; /* getClickThroughUrl */


//static valueless fields


// methods


@end
