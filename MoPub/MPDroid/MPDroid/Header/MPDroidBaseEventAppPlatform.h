//
//  MPDroidBaseEventAppPlatform.h
// 
//  Bridges to the java object com.mopub.common.event.BaseEvent.AppPlatform
//  See http://developer.android.com/reference/com/mopub/common/event/BaseEvent.AppPlatform.html for documentation.
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
Java class: MPDroidBaseEventAppPlatform
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.BaseEvent$AppPlatform")
@interface MPDroidBaseEventAppPlatform : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, assign) int32_t type; /* getType */


//static valueless fields
+ (MPDroidBaseEventAppPlatform *)android;
+ (MPDroidBaseEventAppPlatform *)mobileWeb;

// methods


@end
