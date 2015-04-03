//
//  MPDroidDips.m
// 
//  Bridges to the java object com.mopub.common.util.Dips
//  See http://developer.android.com/reference/com/mopub/common/util/Dips.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDips.h>
//other required types
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidDips


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) pixelsToFloatDips:context: = pixelsToFloatDips;
@bridge (method, static) pixelsToIntDips:context: = pixelsToIntDips;
@bridge (method, static) dipsToFloatPixels:context: = dipsToFloatPixels;
@bridge (method, static) dipsToIntPixels:context: = dipsToIntPixels;
@bridge (method, static) asFloatPixels:context: = asFloatPixels;
@bridge (method, static) asIntPixels:context: = asIntPixels;


@end
