//
//  MPDroidManifestUtils.h
// 
//  Bridges to the java object com.mopub.common.util.ManifestUtils
//  See http://developer.android.com/reference/com/mopub/common/util/ManifestUtils.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaList;
@class AndroidContext;
@class JavaClass;


//defines and their comments (static fields with values)


/**
Java class: MPDroidManifestUtils
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.ManifestUtils")
@interface MPDroidManifestUtils : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (void)checkWebViewActivitiesDeclared:(AndroidContext *)context; /* checkWebViewActivitiesDeclared */
+ (void)checkNativeActivitiesDeclared:(AndroidContext *)context; /* checkNativeActivitiesDeclared */
+ (BOOL)isDebuggable:(AndroidContext *)context; /* isDebuggable */


@end
