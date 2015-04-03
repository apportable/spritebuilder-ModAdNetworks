#import "AdBridge.h"

@implementation MoPubView
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) loadAd = loadAd;
@bridge (method, instance) adUnitId = getAdUnitId;
@bridge (method, instance) setAdUnitId: = setAdUnitId;
@end

