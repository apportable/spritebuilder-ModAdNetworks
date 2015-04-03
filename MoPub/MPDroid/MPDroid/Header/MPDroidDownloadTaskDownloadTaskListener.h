//
//  MPDroidDownloadTaskDownloadTaskListener.h
// 
//  Bridges to the java interface com.mopub.common.DownloadTask.DownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/common/DownloadTask.DownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidDownloadResponse;


//static fields


/**
Java interface: MPDroidDownloadTaskDownloadTaskListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.DownloadTask$DownloadTaskListener")
@protocol MPDroidDownloadTaskDownloadTaskListener 

// properties


// methods
- (void)onComplete:(NSString *)url downloadResponse:(MPDroidDownloadResponse *)downloadResponse; /* onComplete */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.DownloadTask$DownloadTaskListener")
@interface MPDroidDownloadTaskDownloadTaskListener : JavaObject <MPDroidDownloadTaskDownloadTaskListener>

//properties for handlers
@property (nonatomic, copy) void (^onCompleteDownloadResponseHandler)(NSString *, MPDroidDownloadResponse *);


//convenience class method
+ (MPDroidDownloadTaskDownloadTaskListener *)listenerWithBlock:(void (^)(NSString *, MPDroidDownloadResponse *))onCompleteDownloadResponseHandler;

@end