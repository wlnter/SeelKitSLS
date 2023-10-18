//
//  SKManager.h
//  SeelKit
//
//  Created by CP on 2022/10/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SKPriceCompleteBlock)(BOOL, NSString *, NSString *,NSError * _Nullable);

@interface SKManager : NSObject
+(instancetype)shared;

/// 初始化sdk
/// @param appKey 开发者在官网申请到的appKey
- (void)startWithAppKey:(NSString *)appKey;

/// 获取报价
/// @param params NSDictionary 具体传什么参数，需与后端开发人员沟通
/// @param completion success:是否成功 price：保单价格 error：error
- (void)creatQuotesParams:(NSDictionary *)params completion:(SKPriceCompleteBlock)completion;


/// 监听
/// @param event_type 监听类型
/// @param event_data 监听数据
- (void)listenerWithEvent_type:(NSString *)event_type event_data:(NSDictionary *)event_data;

@end

NS_ASSUME_NONNULL_END
