//
//  MPDroidNativeErrorCode.m
// 
//  Bridges to the java object com.mopub.nativeads.NativeErrorCode
//  See http://developer.android.com/reference/com/mopub/nativeads/NativeErrorCode.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNativeErrorCode.h>
//other required types


@implementation MPDroidNativeErrorCode


//constructors


//properties


//methods
@bridge (method, instance) description = toString;
@bridge (field, static) emptyAdResponse = EMPTY_AD_RESPONSE;

@bridge (field, static) invalidJson = INVALID_JSON;

@bridge (field, static) imageDownloadFailure = IMAGE_DOWNLOAD_FAILURE;

@bridge (field, static) invalidRequestUrl = INVALID_REQUEST_URL;

@bridge (field, static) unexpectedResponseCode = UNEXPECTED_RESPONSE_CODE;

@bridge (field, static) serverErrorResponseCode = SERVER_ERROR_RESPONSE_CODE;

@bridge (field, static) connectionError = CONNECTION_ERROR;

@bridge (field, static) unspecified = UNSPECIFIED;

@bridge (field, static) networkInvalidRequest = NETWORK_INVALID_REQUEST;

@bridge (field, static) networkTimeout = NETWORK_TIMEOUT;

@bridge (field, static) networkNoFill = NETWORK_NO_FILL;

@bridge (field, static) networkInvalidState = NETWORK_INVALID_STATE;

@bridge (field, static) nativeAdapterConfigurationError = NATIVE_ADAPTER_CONFIGURATION_ERROR;

@bridge (field, static) nativeAdapterNotFound = NATIVE_ADAPTER_NOT_FOUND;



@end
