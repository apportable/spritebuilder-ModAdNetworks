//
//  MPDroidMoPubNetworkErrorReason.h
// 
//  Bridges to the java object com.mopub.network.MoPubNetworkError.Reason
//  See http://developer.android.com/reference/com/mopub/network/MoPubNetworkError.Reason.html for documentation.
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
Java class: MPDroidMoPubNetworkErrorReason
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.MoPubNetworkError$Reason")
@interface MPDroidMoPubNetworkErrorReason : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidMoPubNetworkErrorReason *)warmingUp;
+ (MPDroidMoPubNetworkErrorReason *)noFill;
+ (MPDroidMoPubNetworkErrorReason *)badHeaderData;
+ (MPDroidMoPubNetworkErrorReason *)badBody;
+ (MPDroidMoPubNetworkErrorReason *)trackingFailure;
+ (MPDroidMoPubNetworkErrorReason *)unspecified;

// methods


@end
