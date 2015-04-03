//
//  MPDroidDownloadTaskDownloadTaskListener.m
// 
//  An adapter to the java interface com.mopub.common.DownloadTask.DownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/common/DownloadTask.DownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidDownloadTaskDownloadTaskListener.h>
//other required types
#import <MPDroid/MPDroidDownloadResponse.h>
#import "block/include/MPDroidBlockDownloadTaskDownloadTaskListener.h"


@implementation MPDroidDownloadTaskDownloadTaskListener

//properties
@bridge (method, instance) onComplete:downloadResponse: = onComplete;


//methods


//convenience class method
+ (MPDroidDownloadTaskDownloadTaskListener *)listenerWithBlock:(void (^)(NSString *, MPDroidDownloadResponse *))onCompleteDownloadResponseHandler
{
    MPDroidDownloadTaskDownloadTaskListener *listener = [[MPDroidBlockDownloadTaskDownloadTaskListener alloc] init];
    listener.onCompleteDownloadResponseHandler = onCompleteDownloadResponseHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onCompleteDownloadResponseHandler != nil)
    {
        Block_release(_onCompleteDownloadResponseHandler);
        _onCompleteDownloadResponseHandler = nil;
    }
    [super dealloc];
}


@end
