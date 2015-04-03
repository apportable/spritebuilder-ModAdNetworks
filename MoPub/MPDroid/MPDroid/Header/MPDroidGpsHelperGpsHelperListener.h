//
//  MPDroidGpsHelperGpsHelperListener.h
// 
//  Bridges to the java interface com.mopub.common.GpsHelper.GpsHelperListener
//  See http://developer.android.com/reference/com/mopub/common/GpsHelper.GpsHelperListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidGpsHelperGpsHelperListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.GpsHelper$GpsHelperListener")
@protocol MPDroidGpsHelperGpsHelperListener 

// properties


// methods
- (void)onFetchAdInfoCompleted; /* onFetchAdInfoCompleted */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.GpsHelper$GpsHelperListener")
@interface MPDroidGpsHelperGpsHelperListener : JavaObject <MPDroidGpsHelperGpsHelperListener>

//properties for handlers
@property (nonatomic, copy) void (^onFetchAdInfoCompletedHandler)();


//convenience class method
+ (MPDroidGpsHelperGpsHelperListener *)listenerWithBlock:(void (^)())onFetchAdInfoCompletedHandler;

@end