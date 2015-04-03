//
//  MPDroidDownloadTask.h
// 
//  Bridges to the java object com.mopub.common.DownloadTask
//  See http://developer.android.com/reference/com/mopub/common/DownloadTask.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidAsyncTask.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidDownloadTaskDownloadTaskListener;
@protocol ApacheHttpUriRequest;
@class MPDroidDownloadResponse;
@class MPDroidMoPubEventsType;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDownloadTask
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DownloadTask")
@interface MPDroidDownloadTask : AndroidAsyncTask 

// constructors
- (instancetype)initWithDownloadTaskListener:(JavaObject <MPDroidDownloadTaskDownloadTaskListener> *)downloadTaskListener; /* <init> */
- (instancetype)initWithDownloadTaskListener:(JavaObject <MPDroidDownloadTaskDownloadTaskListener> *)downloadTaskListener type:(MPDroidMoPubEventsType *)eventType; /* <init> */


// properties


//static valueless fields


// methods


@end
