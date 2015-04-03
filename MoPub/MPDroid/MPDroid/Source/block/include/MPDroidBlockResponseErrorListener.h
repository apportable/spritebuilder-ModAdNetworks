//
//  MPDroidBlockResponseErrorListener.h
//
//  A block-based way adapt to the java interface com.mopub.volley.Response.ErrorListener
//  See http://developer.android.com/reference/com/mopub/volley/Response.ErrorListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidResponseErrorListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockResponseErrorListener")
@interface MPDroidBlockResponseErrorListener : MPDroidResponseErrorListener

//methods
- (void)onErrorResponse:(MPDroidVolleyError *)error;


@end
