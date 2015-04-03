//
//  MPDroidViewBinderBuilder.m
// 
//  Bridges to the java object com.mopub.nativeads.ViewBinder.Builder
//  See http://developer.android.com/reference/com/mopub/nativeads/ViewBinder.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidViewBinderBuilder.h>
//other required types
#import <JavaKit/JavaMap.h>
#import <MPDroid/MPDroidViewBinder.h>


@implementation MPDroidViewBinderBuilder


//constructors
@bridge (constructor) initWithLayoutId:;


//properties
@bridge (instance, method) build = build;



//methods
@bridge (method, instance) titleId: = titleId;
@bridge (method, instance) textId: = textId;
@bridge (method, instance) callToActionId: = callToActionId;
@bridge (method, instance) mainImageId: = mainImageId;
@bridge (method, instance) iconImageId: = iconImageId;
@bridge (method, instance) addExtras: = addExtras;
@bridge (method, instance) addExtra:resourceId: = addExtra;


@end
