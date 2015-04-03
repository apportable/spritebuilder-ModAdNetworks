//
//  MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.VastVideoDownloadTask.VastVideoDownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoDownloadTask.VastVideoDownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener.h>
//other required types
#import "block/include/MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener.h"


@implementation MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener

//properties
@bridge (method, instance) onComplete: = onComplete;


//methods


//convenience class method
+ (MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener *)listenerWithBlock:(void (^)(BOOL))onCompleteHandler
{
    MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener *listener = [[MPDroidBlockVastVideoDownloadTaskVastVideoDownloadTaskListener alloc] init];
    listener.onCompleteHandler = onCompleteHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onCompleteHandler != nil)
    {
        Block_release(_onCompleteHandler);
        _onCompleteHandler = nil;
    }
    [super dealloc];
}


@end
