//
//  MPDroidCustomEventBannerAdapterFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventBannerAdapterFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventBannerAdapterFactory.html for documentation.
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
@class MPDroidMoPubView;
@class MPDroidCustomEventBannerAdapter;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCustomEventBannerAdapterFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.CustomEventBannerAdapterFactory")
@interface MPDroidCustomEventBannerAdapterFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCustomEventBannerAdapter *)createWithMoPubView:(MPDroidMoPubView *)moPubView className:(NSString *)className map:(JavaObject <JavaMap> *)serverExtras broadcastIdentifier:(int64_t)broadcastIdentifier adReport:(MPDroidAdReport *)adReport; /* create */


@end
