//
//  MPDroidSharedPreferencesHelper.m
// 
//  Bridges to the java object com.mopub.common.SharedPreferencesHelper
//  See http://developer.android.com/reference/com/mopub/common/SharedPreferencesHelper.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidSharedPreferencesHelper.h>
//other required types
#import <AndroidKit/AndroidSharedPreferences.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidSharedPreferencesHelper


//constructors


//properties


//methods
@bridge (method, static) sharedPreferencesForContext: = getSharedPreferences;


@end
