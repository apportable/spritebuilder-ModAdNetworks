//
//  MPDroidJson.h
// 
//  Bridges to the java object com.mopub.common.util.Json
//  See http://developer.android.com/reference/com/mopub/common/util/Json.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaClass;
@protocol JavaMap;
@class JavaJSONObject;


//defines and their comments (static fields with values)


/**
Java class: MPDroidJson
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Json")
@interface MPDroidJson : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (JavaObject <JavaMap> *)jsonStringToMap:(NSString *)jsonParams; /* jsonStringToMap */
+ (NSString *)mapToJsonString:(JavaObject <JavaMap> *)map; /* mapToJsonString */
+ (NSArray * BRIDGE_ARRAY(NSString))jsonArrayToStringArray:(NSString *)jsonString; /* jsonArrayToStringArray */
+ (JavaObject *)jsonValueForJSONObject:(JavaJSONObject *)jsonObject key:(NSString *)key class:(JavaClass *)valueClass; /* getJsonValue */


@end
