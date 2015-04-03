//
//  MPDroidVastVideoDownloadTask.h
// 
//  Bridges to the java object com.mopub.mobileads.VastVideoDownloadTask
//  See http://developer.android.com/reference/com/mopub/mobileads/VastVideoDownloadTask.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidAsyncTask.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener;
@class JavaBoolean;


//defines and their comments (static fields with values)
#define MPDroidVastVideoDownloadTaskMaxVideoSize 26214400

/**
Java class: MPDroidVastVideoDownloadTask
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.VastVideoDownloadTask")
@interface MPDroidVastVideoDownloadTask : AndroidAsyncTask 

// constructors
- (instancetype)initWithVastVideoDownloadTaskListener:(JavaObject <MPDroidVastVideoDownloadTaskVastVideoDownloadTaskListener> *)listener; /* <init> */


// properties


//static valueless fields


// methods


@end
