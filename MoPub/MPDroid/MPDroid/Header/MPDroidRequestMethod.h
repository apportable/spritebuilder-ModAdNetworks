//
//  MPDroidRequestMethod.h
// 
//  Bridges to the java interface com.mopub.volley.Request.Method
//  See http://developer.android.com/reference/com/mopub/volley/Request.Method.html for documentation.
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
#define MPDroidRequestMethodDeprecatedGetOrPost -1
#define MPDroidRequestMethodPost 1
#define MPDroidRequestMethodDelete 3
#define MPDroidRequestMethodHead 4
#define MPDroidRequestMethodOptions 5
#define MPDroidRequestMethodTrace 6
#define MPDroidRequestMethodPatch 7

/**
Java interface: MPDroidRequestMethod
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.Request$Method")
@protocol MPDroidRequestMethod 

// properties


// methods



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.Request$Method")
@interface MPDroidRequestMethod : JavaObject <MPDroidRequestMethod>

//properties for handlers


//convenience class method


@end