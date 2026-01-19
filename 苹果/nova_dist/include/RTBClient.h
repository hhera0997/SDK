// RTBClient.h
#import <Foundation/Foundation.h>
@class BidRequest;

NS_ASSUME_NONNULL_BEGIN

typedef void(^RTBCompletion)(NSDictionary * _Nullable ad, NSError * _Nullable error);

@interface RTBClient : NSObject
- (void)sendBidRequest:(BidRequest *)req
              endpoint:(NSURL *)endpoint
            completion:(RTBCompletion)completion;
@end

NS_ASSUME_NONNULL_END
