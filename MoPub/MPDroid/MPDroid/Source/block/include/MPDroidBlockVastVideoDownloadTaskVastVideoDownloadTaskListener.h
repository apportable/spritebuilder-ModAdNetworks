//
//  MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.VastVideoDownloadTask.VastVideoDownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoDownloadTask.VastVideoDownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener")
@interface MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener : MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener

//methods
- (void)onComplete:(BOOL)success;


@end
