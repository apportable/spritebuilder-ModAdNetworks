//
//  MPDroidNetworkDispatcher.h
// 
//  Bridges to the java object com.mopub.volley.NetworkDispatcher
//  See http://developer.android.com/reference/com/mopub/volley/NetworkDispatcher.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaThread.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@class MPDroidVolleyError;
@protocol MPDroidResponseDelivery;
@protocol MPDroidCache;
@protocol JavaBlockingQueue;
@protocol MPDroidNetwork;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNetworkDispatcher
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.NetworkDispatcher")
@interface MPDroidNetworkDispatcher : JavaThread 

// constructors
- (instancetype)initWithBlockingQueue:(JavaObject <JavaBlockingQueue> *)queue network:(JavaObject <MPDroidNetwork> *)network cache:(JavaObject <MPDroidCache> *)cache responseDelivery:(JavaObject <MPDroidResponseDelivery> *)delivery; /* <init> */


// properties


//static valueless fields


// methods
- (void)quit; /* quit */
- (void)run; /* run */


@end
