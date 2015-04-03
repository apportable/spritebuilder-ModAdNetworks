//
//  MPDroidVastManagerFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.VastManagerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/VastManagerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidVastManager;
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidVastManagerFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.VastManagerFactory")
@interface MPDroidVastManagerFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidVastManager *)createWithContext:(AndroidContext *)context; /* create */
- (MPDroidVastManager *)internalCreate:(AndroidContext *)context; /* internalCreate */


@end
