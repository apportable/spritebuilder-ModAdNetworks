//
//  MPDroidErrorEvent.h
// 
//  Bridges to the java object com.mopub.common.event.ErrorEvent
//  See http://developer.android.com/reference/com/mopub/common/event/ErrorEvent.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseEvent.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidErrorEventBuilder;
@class JavaInteger;


//defines and their comments (static fields with values)


/**
Java class: MPDroidErrorEvent
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.ErrorEvent")
@interface MPDroidErrorEvent : MPDroidBaseEvent 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *errorClassName; /* getErrorClassName */
@property (nonatomic, readonly, copy) NSString *errorFileName; /* getErrorFileName */
@property (nonatomic, readonly, copy) NSString *errorExceptionClassName; /* getErrorExceptionClassName */
@property (nonatomic, readonly, copy) NSString *errorMessage; /* getErrorMessage */
@property (nonatomic, readonly, copy) NSString *errorStackTrace; /* getErrorStackTrace */
@property (nonatomic, readonly, copy) NSString *errorMethodName; /* getErrorMethodName */
@property (nonatomic, readonly, retain) JavaInteger *errorLineNumber; /* getErrorLineNumber */


//static valueless fields


// methods
- (NSString *)description; /* toString */


@end
