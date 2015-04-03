//
//  MPDroidMoPubErrorCode.m
// 
//  Bridges to the java object com.mopub.mobileads.MoPubErrorCode
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubErrorCode.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubErrorCode.h>
//other required types


@implementation MPDroidMoPubErrorCode


//constructors


//properties


//methods
@bridge (method, instance) description = toString;
@bridge (field, static) noFill = NO_FILL;

@bridge (field, static) serverError = SERVER_ERROR;

@bridge (field, static) internalError = INTERNAL_ERROR;

@bridge (field, static) cancelled = CANCELLED;

@bridge (field, static) adapterNotFound = ADAPTER_NOT_FOUND;

@bridge (field, static) adapterConfigurationError = ADAPTER_CONFIGURATION_ERROR;

@bridge (field, static) networkTimeout = NETWORK_TIMEOUT;

@bridge (field, static) networkNoFill = NETWORK_NO_FILL;

@bridge (field, static) networkInvalidState = NETWORK_INVALID_STATE;

@bridge (field, static) mraidLoadError = MRAID_LOAD_ERROR;

@bridge (field, static) videoCacheError = VIDEO_CACHE_ERROR;

@bridge (field, static) videoDownloadError = VIDEO_DOWNLOAD_ERROR;

@bridge (field, static) videoNotAvailable = VIDEO_NOT_AVAILABLE;

@bridge (field, static) videoPlaybackError = VIDEO_PLAYBACK_ERROR;

@bridge (field, static) unspecified = UNSPECIFIED;



@end
