//
//  MPDroidMoPubAdRenderer.h
// 
//  Bridges to the java interface com.mopub.nativeads.MoPubAdRenderer
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubAdRenderer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;
@class AndroidViewGroup;
@class AndroidContext;


//static fields


/**
Java interface: MPDroidMoPubAdRenderer
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.MoPubAdRenderer")
@protocol MPDroidMoPubAdRenderer 

// properties


// methods
- (AndroidView *)createAdView:(AndroidContext *)context viewGroup:(AndroidViewGroup *)parent; /* createAdView */
- (void)renderAdView:(AndroidView *)view nativeResponse:(JavaObject *)nativeResponse; /* renderAdView */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.MoPubAdRenderer")
@interface MPDroidMoPubAdRenderer : JavaObject <MPDroidMoPubAdRenderer>

//properties for handlers


//convenience class method


@end