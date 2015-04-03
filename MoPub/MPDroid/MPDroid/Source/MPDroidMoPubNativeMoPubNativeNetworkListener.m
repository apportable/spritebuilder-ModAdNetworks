//
//  MPDroidMoPubNativeMoPubNativeNetworkListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeNetworkListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeNetworkListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeNetworkListener.h>
//other required types
#import <MPDroid/MPDroidNativeResponse.h>
#import <MPDroid/MPDroidNativeErrorCode.h>
#import "block/include/MPDroidBlockMoPubNativeMoPubNativeNetworkListener.h"


@implementation MPDroidMoPubNativeMoPubNativeNetworkListener

//properties
@bridge (method, instance) onNativeFail: = onNativeFail;
@bridge (method, instance) onNativeLoad: = onNativeLoad;


//methods


//convenience class method
+ (MPDroidMoPubNativeMoPubNativeNetworkListener *)listener
{
    return [[[MPDroidBlockMoPubNativeMoPubNativeNetworkListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onNativeLoadHandler != nil)
    {
        Block_release(_onNativeLoadHandler);
        _onNativeLoadHandler = nil;
    }
    if (_onNativeFailHandler != nil)
    {
        Block_release(_onNativeFailHandler);
        _onNativeFailHandler = nil;
    }
    [super dealloc];
}


@end
