//
//  MPDroidCustomEventInterstitialAdapterFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.CustomEventInterstitialAdapterFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/CustomEventInterstitialAdapterFactory.html for documentation.
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
@class MPDroidMoPubInterstitial;
@class MPDroidCustomEventInterstitialAdapter;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCustomEventInterstitialAdapterFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.CustomEventInterstitialAdapterFactory")
@interface MPDroidCustomEventInterstitialAdapterFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCustomEventInterstitialAdapter *)createWithMoPubInterstitial:(MPDroidMoPubInterstitial *)moPubInterstitial className:(NSString *)className map:(JavaObject <JavaMap> *)serverExtras broadcastIdentifier:(int64_t)broadcastIdentifier adReport:(MPDroidAdReport *)adReport; /* create */


@end
