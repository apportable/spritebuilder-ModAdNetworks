//
//  MPDroidBlockGpsHelperGpsHelperListener.m
//
//  A block-based way adapt to the java interface com.mopub.common.GpsHelper.GpsHelperListener
//  See MPDroid/MPDroidBlockGpsHelperGpsHelperListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockGpsHelperGpsHelperListener.h"
//other required types


@implementation MPDroidBlockGpsHelperGpsHelperListener

// overrides
- (void)onFetchAdInfoCompleted
{
    if (self.onFetchAdInfoCompletedHandler)
    {
        self.onFetchAdInfoCompletedHandler();
    }
}



// bridges
@bridge (callback) onFetchAdInfoCompleted = onFetchAdInfoCompleted;


@end
