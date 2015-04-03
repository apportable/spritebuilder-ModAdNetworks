//
//  MPDroidVersionCode.m
// 
//  Bridges to the java object com.mopub.common.util.VersionCode
//  See http://developer.android.com/reference/com/mopub/common/util/VersionCode.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVersionCode.h>
//other required types


@implementation MPDroidVersionCode


//constructors


//properties
@bridge (instance, method) apiLevel = getApiLevel;



//methods
@bridge (method, static) currentApiLevel = currentApiLevel;
@bridge (method, instance) isAtMost: = isAtMost;
@bridge (method, instance) isAtLeast: = isAtLeast;
@bridge (method, instance) isBelowVersionCode: = isBelow;
@bridge (field, static) base = BASE;

@bridge (field, static) base11 = BASE_1_1;

@bridge (field, static) cupcake = CUPCAKE;

@bridge (field, static) donut = DONUT;

@bridge (field, static) eclair = ECLAIR;

@bridge (field, static) eclair01 = ECLAIR_0_1;

@bridge (field, static) eclairMr1 = ECLAIR_MR1;

@bridge (field, static) froyo = FROYO;

@bridge (field, static) gingerbread = GINGERBREAD;

@bridge (field, static) gingerbreadMr1 = GINGERBREAD_MR1;

@bridge (field, static) honeycomb = HONEYCOMB;

@bridge (field, static) honeycombMr1 = HONEYCOMB_MR1;

@bridge (field, static) honeycombMr2 = HONEYCOMB_MR2;

@bridge (field, static) iceCreamSandwich = ICE_CREAM_SANDWICH;

@bridge (field, static) iceCreamSandwichMr1 = ICE_CREAM_SANDWICH_MR1;

@bridge (field, static) jellyBean = JELLY_BEAN;

@bridge (field, static) jellyBeanMr1 = JELLY_BEAN_MR1;

@bridge (field, static) jellyBeanMr2 = JELLY_BEAN_MR2;

@bridge (field, static) kitkat = KITKAT;

@bridge (field, static) curDevelopment = CUR_DEVELOPMENT;



@end
