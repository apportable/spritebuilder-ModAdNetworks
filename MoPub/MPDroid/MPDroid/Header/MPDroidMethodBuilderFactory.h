//
//  MPDroidMethodBuilderFactory.h
// 
//  Bridges to the java object com.mopub.common.factories.MethodBuilderFactory
//  See http://developer.android.com/reference/com/mopub/common/factories/MethodBuilderFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidReflectionMethodBuilder;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMethodBuilderFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.factories.MethodBuilderFactory")
@interface MPDroidMethodBuilderFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidReflectionMethodBuilder *)createWithObject:(JavaObject *)object methodName:(NSString *)methodName; /* create */


@end
