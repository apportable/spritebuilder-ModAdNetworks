//
//  MPDroidBaseEventScribeCategory.h
// 
//  Bridges to the java object com.mopub.common.event.BaseEvent.ScribeCategory
//  See http://developer.android.com/reference/com/mopub/common/event/BaseEvent.ScribeCategory.html for documentation.
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
Java class: MPDroidBaseEventScribeCategory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.BaseEvent$ScribeCategory")
@interface MPDroidBaseEventScribeCategory : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *category; /* getCategory */


//static valueless fields
+ (MPDroidBaseEventScribeCategory *)exchangeClientEvent;
+ (MPDroidBaseEventScribeCategory *)exchangeClientError;

// methods


@end
