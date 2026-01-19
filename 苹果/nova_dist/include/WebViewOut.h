#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class CWebViewPlugin;
@class DataInfo;
@class DataEnable;
@class DataConfig;
@class DataMotion;

typedef NS_ENUM(NSUInteger, MotionStatus) {
    MotionStatusIdle,
    MotionStatusLoading,
    MotionStatusFinish,
    MotionStatusMotion
};

@interface WebViewOut : NSObject

- (instancetype)initWithContext:(UIViewController *)context index:(NSInteger)index;

- (void)setViewLayer:(BOOL)top;
- (void)setData:(DataEnable *)we wc:(DataConfig *)wc UA:(NSString *)ua;
- (void)reSetData:(DataEnable *)we wc:(DataConfig *)wc;
- (void)destroy;

@end
