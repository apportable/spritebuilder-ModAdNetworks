//
//  MPDroidCustomEventNativeFactory.h
// 
//  Bridges to the java object com.mopub.nativeads.factories.CustomEventNativeFactory
//  See http://developer.android.com/reference/com/mopub/nativeads/factories/CustomEventNativeFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidCustomEventNative;
@class JavaClass;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCustomEventNativeFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.factories.CustomEventNativeFactory")
@interface MPDroidCustomEventNativeFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCustomEventNative *)createWithClassName:(NSString *)className; /* create */


@end
