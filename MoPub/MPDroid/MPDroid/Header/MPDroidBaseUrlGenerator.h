//
//  MPDroidBaseUrlGenerator.h
// 
//  Bridges to the java object com.mopub.common.BaseUrlGenerator
//  See http://developer.android.com/reference/com/mopub/common/BaseUrlGenerator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaStringBuilder;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseUrlGenerator
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.BaseUrlGenerator")
@interface MPDroidBaseUrlGenerator : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (NSString *)generateUrlString:(NSString *)serverHostname; /* generateUrlString */


@end
