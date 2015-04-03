//
//  MPDroidSharedPreferencesHelper.h
// 
//  Bridges to the java object com.mopub.common.SharedPreferencesHelper
//  See http://developer.android.com/reference/com/mopub/common/SharedPreferencesHelper.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol AndroidSharedPreferences;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidSharedPreferencesHelperPreferenceName @"mopubSettings"

/**
Java class: MPDroidSharedPreferencesHelper
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.SharedPreferencesHelper")
@interface MPDroidSharedPreferencesHelper : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (JavaObject <AndroidSharedPreferences> *)sharedPreferencesForContext:(AndroidContext *)context; /* getSharedPreferences */


@end
