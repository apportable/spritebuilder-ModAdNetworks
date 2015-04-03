//
//  MPDroidBaseEventScribeCategory.m
// 
//  Bridges to the java object com.mopub.common.event.BaseEvent.ScribeCategory
//  See http://developer.android.com/reference/com/mopub/common/event/BaseEvent.ScribeCategory.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBaseEventScribeCategory.h>
//other required types


@implementation MPDroidBaseEventScribeCategory


//constructors


//properties
@bridge (instance, method) category = getCategory;



//methods
@bridge (field, static) exchangeClientEvent = EXCHANGE_CLIENT_EVENT;

@bridge (field, static) exchangeClientError = EXCHANGE_CLIENT_ERROR;



@end
