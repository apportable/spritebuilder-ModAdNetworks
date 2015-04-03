//
//  MPDroidMraidBridge.h
// 
//  Bridges to the java object com.mopub.mraid.MraidBridge
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMraidJavascriptCommand;
@class MPDroidMraidNativeCommandHandler;
@protocol MPDroidMraidBridgeMraidBridgeListener;
@class MPDroidMraidBridgeMraidWebView;
@class MPDroidPlacementType;
@class MPDroidViewState;
@class AndroidRect;
@protocol JavaMap;
@class JavaURI;
@class AndroidWebViewClient;
@class MPDroidAdReport;
@class MPDroidCloseableLayoutClosePosition;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidBridge
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidBridge")
@interface MPDroidMraidBridge : JavaObject 

// constructors


// properties


//static valueless fields


// methods
- (void)setContentHtml:(NSString *)htmlData; /* setContentHtml */
- (void)setContentUrl:(NSString *)url; /* setContentUrl */


@end
