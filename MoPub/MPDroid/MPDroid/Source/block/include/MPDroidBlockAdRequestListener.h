//
//  MPDroidBlockAdRequestListener.h
//
//  A block-based way adapt to the java interface com.mopub.network.AdRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/AdRequest.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdRequestListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockAdRequestListener")
@interface MPDroidBlockAdRequestListener : MPDroidAdRequestListener

//methods
- (void)onSuccess:(MPDroidAdResponse *)response;
- (void)onErrorResponse:(MPDroidVolleyError *)error;


@end
