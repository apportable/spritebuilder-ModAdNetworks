//
//  MPDroidMoPubErrorCode.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubErrorCode
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubErrorCode.html for documentation.
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
Java class: MPDroidMoPubErrorCode
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubErrorCode")
@interface MPDroidMoPubErrorCode : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidMoPubErrorCode *)noFill;
+ (MPDroidMoPubErrorCode *)serverError;
+ (MPDroidMoPubErrorCode *)internalError;
+ (MPDroidMoPubErrorCode *)cancelled;
+ (MPDroidMoPubErrorCode *)adapterNotFound;
+ (MPDroidMoPubErrorCode *)adapterConfigurationError;
+ (MPDroidMoPubErrorCode *)networkTimeout;
+ (MPDroidMoPubErrorCode *)networkNoFill;
+ (MPDroidMoPubErrorCode *)networkInvalidState;
+ (MPDroidMoPubErrorCode *)mraidLoadError;
+ (MPDroidMoPubErrorCode *)videoCacheError;
+ (MPDroidMoPubErrorCode *)videoDownloadError;
+ (MPDroidMoPubErrorCode *)videoNotAvailable;
+ (MPDroidMoPubErrorCode *)videoPlaybackError;
+ (MPDroidMoPubErrorCode *)unspecified;

// methods
- (NSString *)description; /* toString */


@end
