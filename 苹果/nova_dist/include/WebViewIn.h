#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SafariServices/SafariServices.h>
#import "BootNova.h"
@class DataEnable;
@class DataConfig;
@class DataInfo;

@interface WebViewIn : NSObject <SFSafariViewControllerDelegate>

- (instancetype)initWithContext:(UIViewController *)context
                        manager:(BootNova *)manager
                           left:(NSInteger)left
                            top:(NSInteger)top
                          right:(NSInteger)right
                         bottom:(NSInteger)bottom
                      countdown:(NSInteger)countdown
                        onClose:(WebCloseHandler)onClose;

- (void)setData:(DataEnable *)we wc:(DataConfig *)wc;
- (void)destroy;
- (void)setVisibility:(BOOL)visible;
- (void)setTranslationZ:(CGFloat)z;
- (void)loadURL;

@property (nonatomic, strong, readonly) UIView *containerView;
@property (nonatomic, strong) NSTimer *countdownTimer;
@property (nonatomic, assign) NSInteger countdownLeft;

@end
