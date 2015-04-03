//
//  MPDroidBlockDownloadTaskDownloadTaskListener.m
//
//  A block-based way adapt to the java interface com.mopub.common.DownloadTask.DownloadTaskListener
//  See MPDroid/MPDroidBlockDownloadTaskDownloadTaskListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockDownloadTaskDownloadTaskListener.h"
//other required types
#import <MPDroid/MPDroidDownloadResponse.h>


@implementation MPDroidBlockDownloadTaskDownloadTaskListener

// overrides
- (void)onComplete:(NSString *)url downloadResponse:(MPDroidDownloadResponse *)downloadResponse
{
    if (self.onCompleteDownloadResponseHandler)
    {
        self.onCompleteDownloadResponseHandler(url, downloadResponse);
    }
}



// bridges
@bridge (callback) onComplete:downloadResponse: = onComplete;


@end
