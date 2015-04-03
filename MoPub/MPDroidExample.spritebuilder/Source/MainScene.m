#import "MainScene.h"

#if __CC_PLATFORM_IOS

@implementation MainScene

@end

#endif

#ifdef ANDROID

#import "AdBridge.h"

@interface MainScene()

@property (nonatomic, strong) MoPubView *adView;

@end

#ifndef NEXT_ANDROID_RELEASE
// In the next release of SpriteBuilder Android plugin, R will use a more elegant automatic bridge, which you can use with syntax like R(layout.main)

BRIDGE_CLASS("org.cocos2d.MPDroidExample.R$layout")
@interface RLayout : JavaObject
+(int)main;
@end

@implementation RLayout
@bridge (static, field) main = main;
@end

BRIDGE_CLASS("org.cocos2d.MPDroidExample.R$id")
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
    CCActivity *a = [CCActivity currentActivity];
    AndroidRelativeLayoutLayoutParams *params = [[AndroidRelativeLayoutLayoutParams alloc] initWithWidth:AndroidViewGroupLayoutParamsMatchParent
                                                                                                  height:AndroidViewGroupLayoutParamsMatchParent];
#ifdef NEXT_ANDROID_RELEASE
    AndroidView* view = [a.layoutInflater inflateWithResource:R(layout.main) viewGroup:nil];
    [a addContentView:view layoutParams:params];
    
    MoPubView *adView = (MoPubView *)[view findViewById:R(id.adView)];
#else
    AndroidView* view = [a.layoutInflater inflateWithResource:RLayout.main viewGroup:nil];
    [a addContentView:view layoutParams:params];
    
    MoPubView *adView = (MoPubView *)[view findViewById:RId.adView];
#endif
    
    //For some reason the first Ad that loads is not visible.
    //Setting the background of the AdView transparent fixes this.
    //An alternative fix is to only add the adView when the first ad load finishes, using bridged code for:
    // adView.setBannerAdListener(new BannerAdListener() {
    //    public void onBannerLoaded() {
    //      add the view
//    [adView setBackgroundColor: AndroidColorTransparent];
    [adView setAdUnitId: @"b195f8dd8ded45fe847ad89ed1d016da"];
    [adView loadAd];
    
    self.adView = adView;
}
#endif

- (void)onDestroy {
    [self.adView destroy];
}

@end
