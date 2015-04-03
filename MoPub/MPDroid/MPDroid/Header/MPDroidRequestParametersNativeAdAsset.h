//
//  MPDroidRequestParametersNativeAdAsset.h
// 
//  Bridges to the java object com.mopub.nativeads.RequestParameters.NativeAdAsset
//  See http://developer.android.com/reference/com/mopub/nativeads/RequestParameters.NativeAdAsset.html for documentation.
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
Java class: MPDroidRequestParametersNativeAdAsset
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.RequestParameters$NativeAdAsset")
@interface MPDroidRequestParametersNativeAdAsset : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidRequestParametersNativeAdAsset *)title;
+ (MPDroidRequestParametersNativeAdAsset *)text;
+ (MPDroidRequestParametersNativeAdAsset *)iconImage;
+ (MPDroidRequestParametersNativeAdAsset *)mainImage;
+ (MPDroidRequestParametersNativeAdAsset *)callToActionText;
+ (MPDroidRequestParametersNativeAdAsset *)starRating;

// methods
- (NSString *)description; /* toString */


@end
