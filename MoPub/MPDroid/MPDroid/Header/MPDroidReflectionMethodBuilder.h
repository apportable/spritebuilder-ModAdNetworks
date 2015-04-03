//
//  MPDroidReflectionMethodBuilder.h
// 
//  Bridges to the java object com.mopub.common.util.Reflection.MethodBuilder
//  See http://developer.android.com/reference/com/mopub/common/util/Reflection.MethodBuilder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaList;
@class JavaClass;


//defines and their comments (static fields with values)


/**
Java class: MPDroidReflectionMethodBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Reflection$MethodBuilder")
@interface MPDroidReflectionMethodBuilder : JavaObject 

// constructors
- (instancetype)initWithInstance:(JavaObject *)instance methodName:(NSString *)methodName; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaObject *execute; /* execute */
@property (nonatomic, readonly, retain) MPDroidReflectionMethodBuilder *setAccessible; /* setAccessible */


//static valueless fields


// methods
- (MPDroidReflectionMethodBuilder *)addParam:(JavaClass *)clazz parameter:(JavaObject *)parameter; /* addParam */
- (MPDroidReflectionMethodBuilder *)setStaticByClass:(JavaClass *)clazz; /* setStatic */


@end
