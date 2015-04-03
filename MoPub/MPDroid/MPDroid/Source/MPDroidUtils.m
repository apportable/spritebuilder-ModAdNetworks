//
//  MPDroidUtils.m
// 
//  Bridges to the java object com.mopub.common.util.Utils
//  See http://developer.android.com/reference/com/mopub/common/util/Utils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidUtils.h>
//other required types
#import <JavaKit/JavaAtomicLong.h>


@implementation MPDroidUtils


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) sha1WithString: = sha1;
@bridge (method, static) generateUniqueId = generateUniqueId;
@bridge (method, static) bitMaskContainsFlag:flag: = bitMaskContainsFlag;


@end
