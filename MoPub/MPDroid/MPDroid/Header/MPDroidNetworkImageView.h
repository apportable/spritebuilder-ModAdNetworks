//
//  MPDroidNetworkImageView.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.NetworkImageView
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/NetworkImageView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidImageView.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol AndroidAttributeSet;
@class MPDroidImageLoader;
@class AndroidContext;
@class MPDroidImageLoaderImageContainer;


//defines and their comments (static fields with values)


/**
Java class: MPDroidNetworkImageView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.NetworkImageView")
@interface MPDroidNetworkImageView : AndroidImageView 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context attributeSet:(JavaObject <AndroidAttributeSet> *)attributes; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context attributeSet:(JavaObject <AndroidAttributeSet> *)attributes defStyle:(int32_t)defStyle; /* <init> */


// properties


//static valueless fields


// methods
- (void)setImageUrl:(NSString *)url imageLoader:(MPDroidImageLoader *)imageLoader; /* setImageUrl */
- (void)setDefaultImageResId:(int32_t)defaultImage; /* setDefaultImageResId */
- (void)setErrorImageResId:(int32_t)errorImage; /* setErrorImageResId */


@end
