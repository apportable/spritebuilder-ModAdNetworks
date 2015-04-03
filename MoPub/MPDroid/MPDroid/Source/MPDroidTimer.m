//
//  MPDroidTimer.m
// 
//  Bridges to the java object com.mopub.common.util.Timer
//  See http://developer.android.com/reference/com/mopub/common/util/Timer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidTimer.h>
//other required types


@implementation MPDroidTimer


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) time = getTime;



//methods
@bridge (method, instance) start = start;
@bridge (method, instance) stop = stop;


@end
