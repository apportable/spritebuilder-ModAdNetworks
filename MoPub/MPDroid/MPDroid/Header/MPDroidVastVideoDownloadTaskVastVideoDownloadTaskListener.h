//
//  MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.VastVideoDownloadTask.VastVideoDownloadTaskListener
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoDownloadTask.VastVideoDownloadTaskListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.VastVideoDownloadTask$VastVideoDownloadTaskListener")
@protocol MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener 

// properties


// methods
- (void)onComplete:(BOOL)success; /* onComplete */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.VastVideoDownloadTask$VastVideoDownloadTaskListener")
@interface MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener : JavaObject <MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener>

//properties for handlers
@property (nonatomic, copy) void (^onCompleteHandler)(BOOL);


//convenience class method
+ (MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener *)listenerWithBlock:(void (^)(BOOL))onCompleteHandler;

@end