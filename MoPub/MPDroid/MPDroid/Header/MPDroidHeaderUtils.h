//
//  MPDroidHeaderUtils.h
// 
//  Bridges to the java object com.mopub.network.HeaderUtils
//  See http://developer.android.com/reference/com/mopub/network/HeaderUtils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidResponseHeader;
@protocol ApacheHttpResponse;
@class JavaInteger;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHeaderUtils
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.HeaderUtils")
@interface MPDroidHeaderUtils : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (NSString *)extractHeader:(JavaObject <JavaMap> *)headers responseHeader:(MPDroidResponseHeader *)responseHeader; /* extractHeader */
+ (JavaInteger *)extractIntegerHeader:(JavaObject <JavaMap> *)headers responseHeader:(MPDroidResponseHeader *)responseHeader; /* extractIntegerHeader */
+ (BOOL)extractBooleanHeader:(JavaObject <JavaMap> *)headers responseHeader:(MPDroidResponseHeader *)responseHeader defaultValue:(BOOL)defaultValue; /* extractBooleanHeader */
// Duplicated: + (NSString *)extractHeader:(JavaObject <ApacheHttpResponse> *)response responseHeader:(MPDroidResponseHeader *)responseHeader; /* extractHeader */
// Duplicated: + (BOOL)extractBooleanHeader:(JavaObject <ApacheHttpResponse> *)response responseHeader:(MPDroidResponseHeader *)responseHeader defaultValue:(BOOL)defaultValue; /* extractBooleanHeader */
// Duplicated: + (JavaInteger *)extractIntegerHeader:(JavaObject <ApacheHttpResponse> *)response responseHeader:(MPDroidResponseHeader *)responseHeader; /* extractIntegerHeader */
+ (int32_t)extractIntHeader:(JavaObject <ApacheHttpResponse> *)response responseHeader:(MPDroidResponseHeader *)responseHeader defaultValue:(int32_t)defaultValue; /* extractIntHeader */


@end
