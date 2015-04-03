BRIDGE_CLASS("com.mopub.mobileads.MoPubView")
@interface MoPubView : AndroidFrameLayout

@property (nonatomic, copy) NSString *adUnitId;

- (void)loadAd;
- (void)destroy;

@end
