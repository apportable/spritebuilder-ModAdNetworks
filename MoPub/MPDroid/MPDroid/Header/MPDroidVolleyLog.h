//
//  MPDroidVolleyLog.h
// 
//  Bridges to the java object com.mopub.volley.VolleyLog
//  See http://developer.android.com/reference/com/mopub/volley/VolleyLog.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaThrowable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidVolleyLog
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.VolleyLog")
@interface MPDroidVolleyLog : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields
+ (BOOL)debug;
+ (void)setDebug:(BOOL)value;


// methods
+ (void)setTagByTag:(NSString *)tag; /* setTag */
+ (void)wtfWithFormat:(NSString *)format args:(NSArray * BRIDGE_ARRAY(JavaObject))args; /* wtf */
+ (void)wtfWithThrowable:(JavaThrowable *)tr format:(NSString *)format args:(NSArray * BRIDGE_ARRAY(JavaObject))args; /* wtf */


@end
