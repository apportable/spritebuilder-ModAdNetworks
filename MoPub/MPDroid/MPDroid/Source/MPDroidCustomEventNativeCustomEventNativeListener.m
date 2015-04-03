//
//  MPDroidCustomEventNativeCustomEventNativeListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.CustomEventNative.CustomEventNativeListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.CustomEventNativeListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCustomEventNativeCustomEventNativeListener.h>
//other required types
#import <MPDroid/MPDroidNativeErrorCode.h>
#import "block/include/MPDroidBlockCustomEventNativeCustomEventNativeListener.h"


@implementation MPDroidCustomEventNativeCustomEventNativeListener

//properties
@bridge (method, instance) onNativeAdFailed: = onNativeAdFailed;


//methods


//convenience class method
+ (MPDroidCustomEventNativeCustomEventNativeListener *)listener
{
    return [[[MPDroidBlockCustomEventNativeCustomEventNativeListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onNativeAdFailedHandler != nil)
    {
        Block_release(_onNativeAdFailedHandler);
        _onNativeAdFailedHandler = nil;
    }
    [super dealloc];
}


@end
