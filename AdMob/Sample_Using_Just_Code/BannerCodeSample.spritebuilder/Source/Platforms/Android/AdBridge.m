#import "AdBridge.h"

@implementation AdSize
@bridge (static, field) BANNER = BANNER;
@end

@implementation GMSAdView
@bridge (constructor) initWithContext:;
@bridge (method, instance) loadAd: = loadAd;
@bridge (instance, method) adSize = getAdSize;
@bridge (instance, method) setAdSize: = setAdSize;
@bridge (instance, method) adUnitId = getAdUnitId;
@bridge (instance, method) setAdUnitId: = setAdUnitId;
@bridge (method, instance) pause = pause;
@bridge (method, instance) resume = resume;
@end

@implementation GMSAdRequest
@bridge (constructor) initWithBuilder:;
@end

@implementation GMSAdRequestBuilder
@bridge (constructor) init;
@bridge (instance, method) build = build;
@bridge (method, instance) addTestDevice: = addTestDevice;
@end
