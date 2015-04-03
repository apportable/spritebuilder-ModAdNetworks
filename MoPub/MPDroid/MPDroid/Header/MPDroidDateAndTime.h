//
//  MPDroidDateAndTime.h
// 
//  Bridges to the java object com.mopub.common.util.DateAndTime
//  See http://developer.android.com/reference/com/mopub/common/util/DateAndTime.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaTimeZone;
@class JavaDate;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDateAndTime
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.DateAndTime")
@interface MPDroidDateAndTime : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaDate *internalNow; /* internalNow */
@property (nonatomic, readonly, retain) JavaTimeZone *internalLocalTimeZone; /* internalLocalTimeZone */


//static valueless fields


// methods
+ (JavaTimeZone *)localTimeZone; /* localTimeZone */
+ (JavaDate *)now; /* now */
+ (NSString *)timeZoneOffsetString; /* getTimeZoneOffsetString */


@end
