//
//  MPDroidMoPubEvents.h
// 
//  Bridges to the java object com.mopub.common.event.MoPubEvents
//  See http://developer.android.com/reference/com/mopub/common/event/MoPubEvents.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidEventDispatcher;
@class MPDroidBaseEvent;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubEvents
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.MoPubEvents")
@interface MPDroidMoPubEvents : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)logWithBaseEvent:(MPDroidBaseEvent *)baseEvent; /* log */
+ (void)setEventDispatcherByEventDispatcher:(MPDroidEventDispatcher *)dispatcher; /* setEventDispatcher */


@end
