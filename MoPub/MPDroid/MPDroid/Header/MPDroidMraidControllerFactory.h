//
//  MPDroidMraidControllerFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.MraidControllerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/MraidControllerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class MPDroidMraidController;
@class AndroidContext;
@class MPDroidPlacementType;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidControllerFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.MraidControllerFactory")
@interface MPDroidMraidControllerFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)setInstanceByMraidControllerFactory:(MPDroidMraidControllerFactory *)factory; /* setInstance */
+ (MPDroidMraidController *)createWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport placementType:(MPDroidPlacementType *)placementType; /* create */


@end
