//
//  MPDroidMoPubEventsType.h
// 
//  Bridges to the java object com.mopub.common.event.MoPubEvents.Type
//  See http://developer.android.com/reference/com/mopub/common/event/MoPubEvents.Type.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubEventsType
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.MoPubEvents$Type")
@interface MPDroidMoPubEventsType : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *mName; /* mName */


//static valueless fields
+ (MPDroidMoPubEventsType *)adRequest;
+ (MPDroidMoPubEventsType *)impressionRequest;
+ (MPDroidMoPubEventsType *)clickRequest;
+ (MPDroidMoPubEventsType *)positioningRequest;
+ (MPDroidMoPubEventsType *)adRequestError;
+ (MPDroidMoPubEventsType *)trackingError;
+ (MPDroidMoPubEventsType *)impressionError;
+ (MPDroidMoPubEventsType *)clickError;
+ (MPDroidMoPubEventsType *)conversionError;
+ (MPDroidMoPubEventsType *)dataError;

// methods


@end
