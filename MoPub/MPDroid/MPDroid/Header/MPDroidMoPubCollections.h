//
//  MPDroidMoPubCollections.h
// 
//  Bridges to the java object com.mopub.common.util.MoPubCollections
//  See http://developer.android.com/reference/com/mopub/common/util/MoPubCollections.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaCollection;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubCollections
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.MoPubCollections")
@interface MPDroidMoPubCollections : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)addAllNonNull:(JavaObject <JavaCollection> *)c a:(NSArray * BRIDGE_ARRAY(JavaObject))a; /* addAllNonNull */


@end
