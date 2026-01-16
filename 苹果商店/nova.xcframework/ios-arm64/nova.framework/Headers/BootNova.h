#import <Foundation/Foundation.h>

@protocol IBridgeCallback;
typedef void (^WebCloseHandler)(void);
@interface BootNova : NSObject
+ (instancetype)start;
+ (BOOL)createPV:(WebCloseHandler)onClose;
+ (BOOL)isConfig;
+ (void)destroyPV;

@end
