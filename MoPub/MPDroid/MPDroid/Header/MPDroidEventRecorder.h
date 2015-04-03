//
//  MPDroidEventRecorder.h
// 
//  Bridges to the java interface com.mopub.common.event.EventRecorder
//  See http://developer.android.com/reference/com/mopub/common/event/EventRecorder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidBaseEvent;


//static fields


/**
Java interface: MPDroidEventRecorder
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.event.EventRecorder")
@protocol MPDroidEventRecorder 

// properties


// methods
- (void)recordWithBaseEvent:(MPDroidBaseEvent *)baseEvent; /* record */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.event.EventRecorder")
@interface MPDroidEventRecorder : JavaObject <MPDroidEventRecorder>

//properties for handlers


//convenience class method


@end