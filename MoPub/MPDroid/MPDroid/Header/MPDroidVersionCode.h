//
//  MPDroidVersionCode.h
// 
//  Bridges to the java object com.mopub.common.util.VersionCode
//  See http://developer.android.com/reference/com/mopub/common/util/VersionCode.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidVersionCode
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.VersionCode")
@interface MPDroidVersionCode : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, assign) int32_t apiLevel; /* getApiLevel */


//static valueless fields
+ (MPDroidVersionCode *)base;
+ (MPDroidVersionCode *)base11;
+ (MPDroidVersionCode *)cupcake;
+ (MPDroidVersionCode *)donut;
+ (MPDroidVersionCode *)eclair;
+ (MPDroidVersionCode *)eclair01;
+ (MPDroidVersionCode *)eclairMr1;
+ (MPDroidVersionCode *)froyo;
+ (MPDroidVersionCode *)gingerbread;
+ (MPDroidVersionCode *)gingerbreadMr1;
+ (MPDroidVersionCode *)honeycomb;
+ (MPDroidVersionCode *)honeycombMr1;
+ (MPDroidVersionCode *)honeycombMr2;
+ (MPDroidVersionCode *)iceCreamSandwich;
+ (MPDroidVersionCode *)iceCreamSandwichMr1;
+ (MPDroidVersionCode *)jellyBean;
+ (MPDroidVersionCode *)jellyBeanMr1;
+ (MPDroidVersionCode *)jellyBeanMr2;
+ (MPDroidVersionCode *)kitkat;
+ (MPDroidVersionCode *)curDevelopment;

// methods
+ (MPDroidVersionCode *)currentApiLevel; /* currentApiLevel */
- (BOOL)isAtMost:(MPDroidVersionCode *)that; /* isAtMost */
- (BOOL)isAtLeast:(MPDroidVersionCode *)that; /* isAtLeast */
- (BOOL)isBelowVersionCode:(MPDroidVersionCode *)that; /* isBelow */


@end
