//
//  MPDroidMoPubViewFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.MoPubViewFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/MoPubViewFactory.html for documentation.
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


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubViewFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.MoPubViewFactory")
@interface MPDroidMoPubViewFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidMoPubView *)createWithContext:(AndroidContext *)context; /* create */


@end
