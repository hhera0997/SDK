#import <Foundation/Foundation.h>
#define TAG @"BootNova"
@interface Logger : NSObject

+ (void)setLoggingEnabled:(BOOL)enabled;

+ (void)d:(NSString *)msg;
+ (void)i:(NSString *)msg;
+ (void)w:(NSString *)msg;
+ (void)e:(NSString *)msg;

@end
