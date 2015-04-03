//
//  MPDroidAdRequest.h
// 
//  Bridges to the java object com.mopub.network.AdRequest
//  See http://developer.android.com/reference/com/mopub/network/AdRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdFormat;
@protocol MPDroidAdRequestListener;
@class MPDroidResponse;
@class MPDroidNetworkResponse;
@class MPDroidAdResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.AdRequest")
@interface MPDroidAdRequest : MPDroidRequest 

// constructors
- (instancetype)initWithUrl:(NSString *)url adFormat:(MPDroidAdFormat *)adFormat adUnitId:(NSString *)adUnitId listener:(JavaObject <MPDroidAdRequestListener> *)listener; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaObject <MPDroidAdRequestListener> *listener; /* getListener */


//static valueless fields


// methods


@end
