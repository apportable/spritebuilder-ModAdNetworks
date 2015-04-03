#import "BannerSampleActivity.h"
#import "MainScene.h"

#if __CC_PLATFORM_IOS

@implementation MainScene

- (void)onEnter {
    [super onEnter];
    //Show your normal iOS advertising
}
@end

#endif


#ifdef ANDROID

#import "AdBridge.h"

#ifndef NEXT_ANDROID_RELEASE
// In the next release of SpriteBuilder Android plugin, R will use a more elegant automatic bridge, which you can use with syntax like R(layout.main)

BRIDGE_CLASS("org.cocos2d.BannerSample.R$layout")
@interface RLayout : JavaObject
+(int)main;
@end

@implementation RLayout
@bridge (static, field) main = main;
@end

BRIDGE_CLASS("org.cocos2d.BannerSample.R$id")
@interface RId : JavaObject
+ (int)adView;
@end

@implementation RId
@bridge (static, field) adView = adView;
@end
#endif

@implementation MainScene

- (void)onEnter {
    [super onEnter];
    [self performSelectorOnMainThread:@selector(loadLayout) withObject:nil waitUntilDone:NO];
}

- (void)loadLayout {
    BannerSampleActivity *a = (BannerSampleActivity *)[CCActivity currentActivity];
    AndroidRelativeLayoutLayoutParams *params = [[AndroidRelativeLayoutLayoutParams alloc] initWithWidth:AndroidViewGroupLayoutParamsMatchParent
                                                                                                  height:AndroidViewGroupLayoutParamsMatchParent];
#ifdef NEXT_ANDROID_RELEASE
    AndroidView* view = [a.layoutInflater inflateWithResource:R(layout.main) viewGroup:nil];
    [a addContentView:view layoutParams:params];
    
    GMSAdView *adView = (GMSAdView *)[view findViewById:R(id.adView)];
#else
    AndroidView* view = [a.layoutInflater inflateWithResource:RLayout.main viewGroup:nil];
    [a addContentView:view layoutParams:params];
    
    GMSAdView *adView = (GMSAdView *)[view findViewById:RId.adView];
#endif
    
    //For some reason the first Ad that loads is not visible.
    //Setting the background of the AdView transparent fixes this.
    //An alternative fix is to only add the adView when the first ad load finishes, using bridged code for:
    // adView.setAdListener(new AdListener() {
    //    public void onAdLoaded() {
    //      add the view
    [adView setBackgroundColor: AndroidColorTransparent];

    GMSAdRequestBuilder *builder = [[GMSAdRequestBuilder alloc] init];
    [builder addTestDevice: @"AFDEFFDF520170399A09CA958C992657"];
    GMSAdRequest *req = [builder build];
    [adView loadAd: req];
    
    a.adView = adView;
}
#endif

@end
