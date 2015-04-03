//
//  MPDroidMoPubNativeAdRenderer.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNativeAdRenderer
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdRenderer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidMoPubAdRenderer.h>


//necessary forward declarations, classes and protocols
@class AndroidViewGroup;
@class JavaWeakHashMap;
@class MPDroidNativeResponse;
@class MPDroidViewBinder;
@class AndroidContext;
@class AndroidView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubNativeAdRenderer
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubNativeAdRenderer")
@interface MPDroidMoPubNativeAdRenderer : JavaObject <MPDroidMoPubAdRenderer>

// constructors
- (instancetype)initWithViewBinder:(MPDroidViewBinder *)viewBinder; /* <init> */


// properties


//static valueless fields


// methods
- (AndroidView *)createAdView:(AndroidContext *)context viewGroup:(AndroidViewGroup *)parent; /* createAdView */
- (void)renderAdView:(AndroidView *)view nativeResponse:(MPDroidNativeResponse *)nativeResponse; /* renderAdView */
- (void)renderAdView; /* renderAdView */


@end
