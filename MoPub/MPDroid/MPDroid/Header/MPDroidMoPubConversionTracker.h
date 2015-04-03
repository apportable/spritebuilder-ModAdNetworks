//
//  MPDroidMoPubConversionTracker.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubConversionTracker
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubConversionTracker.html for documentation.
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


/**
Java class: MPDroidMoPubConversionTracker
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubConversionTracker")
@interface MPDroidMoPubConversionTracker : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)reportAppOpen:(AndroidContext *)context; /* reportAppOpen */


@end
