//
//  MPDroidBlockResponseListener.h
//
//  A block-based way adapt to the java interface com.mopub.volley.Response.Listener
//  See http://developer.android.com/reference/com/mopub/volley/Response.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidResponseListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockResponseListener")
@interface MPDroidBlockResponseListener : MPDroidResponseListener

//methods
- (void)onResponse:(JavaObject *)response;


@end
