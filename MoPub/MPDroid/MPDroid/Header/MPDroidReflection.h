//
//  MPDroidReflection.h
// 
//  Bridges to the java object com.mopub.common.util.Reflection
//  See http://developer.android.com/reference/com/mopub/common/util/Reflection.html for documentation.
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
@class JavaMethod;


//defines and their comments (static fields with values)


/**
Java class: MPDroidReflection
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Reflection")
@interface MPDroidReflection : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (JavaMethod *)declaredMethodWithTraversalForClass:(JavaClass *)clazz methodName:(NSString *)methodName parameterTypes:(NSArray * BRIDGE_ARRAY(JavaClass))parameterTypes; /* getDeclaredMethodWithTraversal */
+ (BOOL)classFound:(NSString *)className; /* classFound */
+ (JavaObject *)instantiateClassWithEmptyConstructor:(NSString *)className class:(JavaClass *)superclass; /* instantiateClassWithEmptyConstructor */


@end
