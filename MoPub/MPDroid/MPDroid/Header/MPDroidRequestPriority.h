//
//  MPDroidRequestPriority.h
// 
//  Bridges to the java object com.mopub.volley.Request.Priority
//  See http://developer.android.com/reference/com/mopub/volley/Request.Priority.html for documentation.
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
Java class: MPDroidRequestPriority
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.Request$Priority")
@interface MPDroidRequestPriority : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidRequestPriority *)normal;
+ (MPDroidRequestPriority *)high;
+ (MPDroidRequestPriority *)immediate;

// methods


@end
