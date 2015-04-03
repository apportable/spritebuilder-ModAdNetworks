//
//  MPDroidCloseableLayoutClosePosition.h
// 
//  Bridges to the java object com.mopub.common.CloseableLayout.ClosePosition
//  See http://developer.android.com/reference/com/mopub/common/CloseableLayout.ClosePosition.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidCloseableLayoutClosePosition
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.CloseableLayout$ClosePosition")
@interface MPDroidCloseableLayoutClosePosition : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidCloseableLayoutClosePosition *)topLeft;
+ (MPDroidCloseableLayoutClosePosition *)topCenter;
+ (MPDroidCloseableLayoutClosePosition *)topRight;
+ (MPDroidCloseableLayoutClosePosition *)center;
+ (MPDroidCloseableLayoutClosePosition *)bottomLeft;
+ (MPDroidCloseableLayoutClosePosition *)bottomCenter;
+ (MPDroidCloseableLayoutClosePosition *)bottomRight;

// methods


@end
