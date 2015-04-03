//
//  MPDroidErrorEventBuilder.h
// 
//  Bridges to the java object com.mopub.common.event.ErrorEvent.Builder
//  See http://developer.android.com/reference/com/mopub/common/event/ErrorEvent.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidErrorEvent;
@class JavaException;
@class JavaInteger;
@class MPDroidBaseEvent;


//defines and their comments (static fields with values)


/**
Java class: MPDroidErrorEventBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.ErrorEvent$Builder")
@interface MPDroidErrorEventBuilder : JavaObject 

// constructors
- (instancetype)initWithEventName:(NSString *)eventName eventCategory:(NSString *)eventCategory; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidErrorEvent *build; /* build */


//static valueless fields


// methods
- (MPDroidErrorEventBuilder *)withErrorExceptionClassName:(NSString *)errorExceptionClassName; /* withErrorExceptionClassName */
- (MPDroidErrorEventBuilder *)withErrorMessage:(NSString *)errorMessage; /* withErrorMessage */
- (MPDroidErrorEventBuilder *)withErrorStackTrace:(NSString *)errorStackTrace; /* withErrorStackTrace */
- (MPDroidErrorEventBuilder *)withErrorFileName:(NSString *)errorFileName; /* withErrorFileName */
- (MPDroidErrorEventBuilder *)withErrorClassName:(NSString *)errorClassName; /* withErrorClassName */
- (MPDroidErrorEventBuilder *)withErrorMethodName:(NSString *)errorMethodName; /* withErrorMethodName */
- (MPDroidErrorEventBuilder *)withErrorLineNumber:(JavaInteger *)errorLineNumber; /* withErrorLineNumber */
- (MPDroidErrorEventBuilder *)withException:(JavaException *)exception; /* withException */


@end
