//
//  MPDroidAdapterHelper.h
// 
//  Bridges to the java object com.mopub.nativeads.AdapterHelper
//  See http://developer.android.com/reference/com/mopub/nativeads/AdapterHelper.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidViewGroup;
@class MPDroidNativeResponse;
@class MPDroidViewBinder;
@class AndroidContext;
@protocol MPDroidMoPubNativeMoPubNativeListener;
@class AndroidView;
@class JavaWeakReference;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdapterHelper
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.AdapterHelper")
@interface MPDroidAdapterHelper : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context start:(int32_t)start interval:(int32_t)interval; /* <init> */


// properties


//static valueless fields


// methods


@end
