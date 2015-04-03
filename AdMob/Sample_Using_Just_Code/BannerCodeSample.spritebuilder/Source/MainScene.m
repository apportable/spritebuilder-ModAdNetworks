#import "BannerCodeSampleActivity.h"
#import "MainScene.h"

#ifdef ANDROID
#import "AdBridge.h"
#endif

@implementation MainScene

- (void)onEnter {
    [super onEnter];
#if __CC_PLATFORM_IOS
    //Show your normal iOS advertising
}
#endif
    
#ifdef ANDROID
    [self performSelectorOnMainThread:@selector(loadLayout) withObject:nil waitUntilDone:NO];
}

- (void)loadLayout {
    BannerCodeSampleActivity *a = (BannerCodeSampleActivity *)[CCActivity currentActivity];

    // We generate an outer layout that fills the screen, and an inner layout that positions the advertising banner at the bottom center of the screen
    
    AndroidRelativeLayout *outerLayout = [[AndroidRelativeLayout alloc] initWithContext:a];

    AndroidRelativeLayoutLayoutParams *params, *innerParams;
    params = [[AndroidRelativeLayoutLayoutParams alloc] initWithWidth:AndroidViewGroupLayoutParamsMatchParent
                                                               height:AndroidViewGroupLayoutParamsMatchParent];
    
    innerParams = [[AndroidRelativeLayoutLayoutParams alloc] initWithWidth:AndroidViewGroupLayoutParamsWrapContent
                                                                    height:AndroidViewGroupLayoutParamsWrapContent];
    [innerParams addRule: AndroidRelativeLayoutCenterHorizontal];
    [innerParams addRule: AndroidRelativeLayoutAlignParentBottom];

    GMSAdView *v = [[GMSAdView alloc] initWithContext:a];

    //For some reason the first Ad that loads is not visible.
    //Setting the background of the AdView transparent fixes this.
    //An alternative fix is to only add the adView when the first ad load finishes, using bridged code for:
    // adView.setAdListener(new AdListener() {
    //    public void onAdLoaded() {
    //      add the view
    [v setBackgroundColor: AndroidColorTransparent];
    
    [outerLayout addView:v layoutParams:innerParams];

    [a addContentView:outerLayout layoutParams:params];
    
    [v setAdSize: [AdSize BANNER]];
    [v setAdUnitId: @"ca-app-pub-3940256099942544/6300978111"];
    GMSAdRequestBuilder *builder = [[GMSAdRequestBuilder alloc] init];
    [builder addTestDevice: @"AFDEFFDF520170399A09CA958C992657"];
    GMSAdRequest *req = [builder build];
    [v loadAd: req];
    
    a.adView = v;
}

#endif

@end
