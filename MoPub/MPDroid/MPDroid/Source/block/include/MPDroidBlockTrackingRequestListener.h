//
//  MPDroidBlockTrackingRequestListener.h
//
//  A block-based way adapt to the java interface com.mopub.network.TrackingRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/TrackingRequest.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidTrackingRequestListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockTrackingRequestListener")
@interface MPDroidBlockTrackingRequestListener : MPDroidTrackingRequestListener

//methods
- (void)onResponse;
- (void)onErrorResponse:(MPDroidVolleyError *)error;


@end
