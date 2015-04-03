//
//  MPDroidBlockDownloadTaskDownloadTaskListener.h
//
//  A block-based way adapt to the java interface com.mopub.common.DownloadTask.DownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/common/DownloadTask.DownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDownloadTaskDownloadTaskListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockDownloadTaskDownloadTaskListener")
@interface MPDroidBlockDownloadTaskDownloadTaskListener : MPDroidDownloadTaskDownloadTaskListener

//methods
- (void)onComplete:(NSString *)url downloadResponse:(MPDroidDownloadResponse *)downloadResponse;


@end
