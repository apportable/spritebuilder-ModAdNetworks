//
//  MPDroidVastVideoDownloadTaskFactory.h
// 
//  Bridges to the java object com.mopub.mobileads.factories.VastVideoDownloadTaskFactory
//  See http://developer.android.com/reference/com/mopub/mobileads/factories/VastVideoDownloadTaskFactory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener;
@class MPDroidVastVideoDownloadTask;


//defines and their comments (static fields with values)


/**
Java class: MPDroidVastVideoDownloadTaskFactory
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.factories.VastVideoDownloadTaskFactory")
@interface MPDroidVastVideoDownloadTaskFactory : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidVastVideoDownloadTask *)createWithVastVideoDownloadTaskListener:(JavaObject <MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener> *)vastVideoDownloadTaskListener; /* create */


@end
