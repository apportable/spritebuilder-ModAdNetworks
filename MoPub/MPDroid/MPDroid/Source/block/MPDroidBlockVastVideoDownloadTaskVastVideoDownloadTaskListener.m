//
//  MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.VastVideoDownloadTask.VastVideoDownloadTaskListener
//  See MPDroid/MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener.h"
//other required types


@implementation MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener

// overrides
- (void)onComplete:(BOOL)success
{
    if (self.onCompleteHandler)
    {
        self.onCompleteHandler(success);
    }
}



// bridges
@bridge (callback) onComplete: = onComplete;


@end
