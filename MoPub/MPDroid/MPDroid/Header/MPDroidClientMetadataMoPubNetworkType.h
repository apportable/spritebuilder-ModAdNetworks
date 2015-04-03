//
//  MPDroidClientMetadataMoPubNetworkType.h
// 
//  Bridges to the java object com.mopub.common.ClientMetadata.MoPubNetworkType
//  See http://developer.android.com/reference/com/mopub/common/ClientMetadata.MoPubNetworkType.html for documentation.
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
Java class: MPDroidClientMetadataMoPubNetworkType
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.ClientMetadata$MoPubNetworkType")
@interface MPDroidClientMetadataMoPubNetworkType : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, assign) int32_t identifier; /* getId */


//static valueless fields
+ (MPDroidClientMetadataMoPubNetworkType *)unknown;
+ (MPDroidClientMetadataMoPubNetworkType *)ethernet;
+ (MPDroidClientMetadataMoPubNetworkType *)wifi;
+ (MPDroidClientMetadataMoPubNetworkType *)mobile;

// methods
- (NSString *)description; /* toString */


@end
