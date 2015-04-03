//
//  MPDroidClientMetadataMoPubNetworkType.m
// 
//  Bridges to the java object com.mopub.common.ClientMetadata.MoPubNetworkType
//  See http://developer.android.com/reference/com/mopub/common/ClientMetadata.MoPubNetworkType.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidClientMetadataMoPubNetworkType.h>
//other required types


@implementation MPDroidClientMetadataMoPubNetworkType


//constructors


//properties
@bridge (instance, method) identifier = getId;



//methods
@bridge (method, instance) description = toString;
@bridge (field, static) unknown = UNKNOWN;

@bridge (field, static) ethernet = ETHERNET;

@bridge (field, static) wifi = WIFI;

@bridge (field, static) mobile = MOBILE;



@end
