//
//  MPDroidBlockMoPubViewOnAdWillLoadListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.MoPubView.OnAdWillLoadListener
//  See MPDroid/MPDroidBlockMoPubViewOnAdWillLoadListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMoPubViewOnAdWillLoadListener.h"
//other required types
#import <MPDroid/MPDroidMoPubView.h>


@implementation MPDroidBlockMoPubViewOnAdWillLoadListener

// overrides
- (void)OnAdWillLoad:(MPDroidMoPubView *)moPubViewParam stringParam:(NSString *)stringParam
{
    if (self.OnAdWillLoadStringParamHandler)
    {
        self.OnAdWillLoadStringParamHandler(moPubViewParam, stringParam);
    }
}



// bridges
@bridge (callback) OnAdWillLoad:stringParam: = OnAdWillLoad;


@end
