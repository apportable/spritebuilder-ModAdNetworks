//
//  MPDroidAdRequest.m
// 
//  Bridges to the java object com.mopub.network.AdRequest
//  See http://developer.android.com/reference/com/mopub/network/AdRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAdRequest.h>
//other required types
#import <MPDroid/MPDroidAdFormat.h>
#import <MPDroid/MPDroidAdRequestListener.h>
#import <MPDroid/MPDroidResponse.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidAdRequest


//constructors
@bridge (constructor) initWithUrl:adFormat:adUnitId:listener:;


//properties
@bridge (instance, method) listener = getListener;



//methods


@end
