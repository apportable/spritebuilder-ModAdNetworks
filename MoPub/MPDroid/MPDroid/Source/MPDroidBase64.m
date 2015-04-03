//
//  MPDroidBase64.m
// 
//  Bridges to the java object com.mopub.mobileads.util.Base64
//  See http://developer.android.com/reference/com/mopub/mobileads/util/Base64.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBase64.h>
//other required types


@implementation MPDroidBase64


//constructors


//properties


//methods
@bridge (method, static) decodeWithStr:flags: = decode;
@bridge (method, static) decodeWithInput:flags: = decode;
@bridge (method, static) decodeWithInput:offset:length:flags: = decode;
@bridge (method, static) encodeToString:flags: = encodeToString;
@bridge (method, static) encodeToString:offset:length:flags: = encodeToString;
@bridge (method, static) encodeWithInput:flags: = encode;
@bridge (method, static) encodeWithInput:offset:length:flags: = encode;


@end
