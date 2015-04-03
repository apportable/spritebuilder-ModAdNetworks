//
//  MPDroidEventSerializer.h
// 
//  Bridges to the java object com.mopub.common.event.EventSerializer
//  See http://developer.android.com/reference/com/mopub/common/event/EventSerializer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaJSONArray;
@protocol JavaList;


//defines and their comments (static fields with values)


/**
Java class: MPDroidEventSerializer
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.EventSerializer")
@interface MPDroidEventSerializer : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (JavaJSONArray *)serializeAsJson:(JavaObject <JavaList> *)events; /* serializeAsJson */


@end
