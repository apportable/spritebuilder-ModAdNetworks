//
//  MPDroidEventBuilder.h
// 
//  Bridges to the java object com.mopub.common.event.Event.Builder
//  See http://developer.android.com/reference/com/mopub/common/event/Event.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidBaseEvent;
@class MPDroidEvent;


//defines and their comments (static fields with values)


/**
Java class: MPDroidEventBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.Event$Builder")
@interface MPDroidEventBuilder : JavaObject 

// constructors
- (instancetype)initWithEventName:(NSString *)eventName eventCategory:(NSString *)eventCategory; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidEvent *build; /* build */


//static valueless fields


// methods


@end
