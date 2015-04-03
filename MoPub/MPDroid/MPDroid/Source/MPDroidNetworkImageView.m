//
//  MPDroidNetworkImageView.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.NetworkImageView
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/NetworkImageView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNetworkImageView.h>
//other required types
#import <AndroidKit/AndroidAttributeSet.h>
#import <MPDroid/MPDroidImageLoader.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidImageLoaderImageContainer.h>


@implementation MPDroidNetworkImageView


//constructors
@bridge (constructor) initWithContext:;
@bridge (constructor) initWithContext:attributeSet:;
@bridge (constructor) initWithContext:attributeSet:defStyle:;


//properties


//methods
@bridge (method, instance) setImageUrl:imageLoader: = setImageUrl;
@bridge (method, instance) setDefaultImageResId: = setDefaultImageResId;
@bridge (method, instance) setErrorImageResId: = setErrorImageResId;


@end
