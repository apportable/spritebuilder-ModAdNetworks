//
//  MPDroidCloseableLayoutOnCloseListener.h
// 
//  Bridges to the java interface com.mopub.common.CloseableLayout.OnCloseListener
//  See http://developer.android.com/reference/com/mopub/common/CloseableLayout.OnCloseListener.html for documentation.
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
Java interface: MPDroidCloseableLayoutOnCloseListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.CloseableLayout$OnCloseListener")
@protocol MPDroidCloseableLayoutOnCloseListener 

// properties


// methods
- (void)onClose; /* onClose */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.CloseableLayout$OnCloseListener")
@interface MPDroidCloseableLayoutOnCloseListener : JavaObject <MPDroidCloseableLayoutOnCloseListener>

//properties for handlers
@property (nonatomic, copy) void (^onCloseHandler)();


//convenience class method
+ (MPDroidCloseableLayoutOnCloseListener *)listenerWithBlock:(void (^)())onCloseHandler;

@end