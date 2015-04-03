//
//  MPDroidAsyncTasks.h
// 
//  Bridges to the java object com.mopub.common.util.AsyncTasks
//  See http://developer.android.com/reference/com/mopub/common/util/AsyncTasks.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidAsyncTask;
@protocol JavaExecutor;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAsyncTasks
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.AsyncTasks")
@interface MPDroidAsyncTasks : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)setExecutorByExecutor:(JavaObject <JavaExecutor> *)executor; /* setExecutor */
+ (void)safeExecuteOnExecutor:(AndroidAsyncTask *)asyncTask parameters:(NSArray * BRIDGE_ARRAY(JavaObject))parameters; /* safeExecuteOnExecutor */


@end
