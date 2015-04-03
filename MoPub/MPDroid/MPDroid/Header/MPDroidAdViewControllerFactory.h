//
//  MPDroidAdViewControllerFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.AdViewControllerFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/AdViewControllerFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubView;
@class AndroidContext;
@class MPDroidAdViewController;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdViewControllerFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.AdViewControllerFactory")
@interface MPDroidAdViewControllerFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidAdViewController *)createWithContext:(AndroidContext *)context moPubView:(MPDroidMoPubView *)moPubView; /* create */


@end
