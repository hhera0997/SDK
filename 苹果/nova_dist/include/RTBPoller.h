// RTBPoller.h
#import <Foundation/Foundation.h>
@class RTBClient, BidRequest;

NS_ASSUME_NONNULL_BEGIN

/// 轮询回调（在后台队列触发，不在主线程）
typedef void(^RTBPollerResultHandler)(NSDictionary * _Nullable ad, NSError * _Nullable error);

@interface RTBPoller : NSObject

/// 轮询间隔（秒），默认 1.0
@property (nonatomic, assign) NSTimeInterval interval;
@property (atomic, assign) NSUInteger consecutiveFailures;
@property (atomic, assign) NSTimeInterval currentInterval;
/// 最大连续失败触发的退避上限（秒）。设为 0 则关闭退避，默认 8。比如 1s -> 2s -> 4s -> 8s。
@property (nonatomic, assign) NSTimeInterval backoffCeiling;

/// 构造函数
/// @param client 你的 RTBClient
/// @param builder 每次触发时构建一个新的 BidRequest（可包含变化的 id/timestamp 等）
/// @param handler 每次请求结果（或错误）的回调（在后台队列）
- (instancetype)initWithClient:(RTBClient *)client
                       builder:(BidRequest *)builder
                       handler:(RTBPollerResultHandler)handler;
-(void)setPollerData:(NSURL *)endpoint interval:(NSTimeInterval)interval backoffCeiling:(NSTimeInterval)backoffCeiling;

/// 开始轮询
- (void)start;

/// 停止轮询
- (void)stop;

@end

NS_ASSUME_NONNULL_END
