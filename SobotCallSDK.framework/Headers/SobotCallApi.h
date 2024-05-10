//
//  SobotCallApi.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SobotCallSDK/SobotCallClient.h>
#import <SobotCallSDK/SobotCallParameter.h>
#import <SobotCallSDK/SobotCallOpenApi.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallApi : NSObject


/// 获取呼叫SDK 版本号
+(NSString *)getSobotCallSDKVersion;


/// 更改kitConfig配置
/// @param kitConfig  congfig配置
+(void)configKitInfo:(SobotCallParameter *) kitConfig;

/// 初始化配置
/// @param config  SobotCallCacheEntity 配置类,域名/国际化/资源
/// @param kitInfo SobotKitConfig 配置类
/// @param resultBlock 初始化回调 (NSInteger code,id _Nullable obj,NSString *_Nullable msg)；
+(void)initWithConfig:(SobotCallCacheEntity *) config  kitInfo:(SobotCallParameter *)kitInfo result:(SobotCallResultBlock) resultBlock;



/// 退出SDK
/// @param resultBlock 回调结果
+(void)outSobotUser:(SobotCallResultBlock) resultBlock;

/// 登录，更多登录方式参加[SobotCallCache doLogin:...]
/// @param account 账号
/// @param loginPwd 密码
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account password:(NSString * )loginPwd result:(SobotCallResultBlock) resultBlock;

/// 登录（使用token）
/// @param account 账号
/// @param token token（公司token，设置token后不要设置loginPwd）
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account  token:(NSString *) token  result:(SobotCallResultBlock) resultBlock;


/// 使用AppID的方式登录
/// @param account  账号
/// @param app_key appkey
/// @param appid addid
/// @param resultBlock 回调
+(void)loginUser:(NSString *)account appkey:(NSString *)app_key appid:(NSString *) appid result:(SobotCallResultBlock) resultBlock;


/// 设置是否 Debug模式，默认为NO，不显示日志
/// @param isShowDebug  YES or NO
+(void)setShowDebug:(BOOL) isShowDebug;


/// 启动SDK 进入呼叫SDK首页
/// @param account  账号
/// @param loginPwd 密码
/// @param vc 启动VC
/// @param resultBlock 回调结果
+(void)startWithAcount:(NSString *)account password:(NSString *)loginPwd viewController:(UIViewController *)vc result:(SobotCallResultBlock) resultBlock;


/// 启动呼叫页面
/// @param account 坐席账号
/// @param token 公司token，根据appkey和appid获取的单点登录的token
/// @param vc 启动的vc
/// @param resultBlock 结果
+(void)startWithAcount:(NSString *)account token:(NSString *) token  viewController:(UIViewController *)vc  result:(SobotCallResultBlock) resultBlock;


/// 启动呼叫页面方式二
/// @param account  账号
/// @param app_key AppKey
/// @param appid appid
/// @param vc 启动VC
/// @param resultBlock 回调结果
+(void)startWithAcount:(NSString *)account appkey:(NSString *)app_key appid:(NSString *) appid viewController:(UIViewController *)vc  result:(SobotCallResultBlock) resultBlock;

///  设置SobotCall状态监听
///   status 外呼的状态
+(void)setSobotCallListener:(void(^)(int code ,SobotCallListenerState state,id _Nullable object,id _Nullable obj,NSString *_Nullable msg))listenerBlock;

+(void)unRegister;

// 跳转到登录电话条页面
+(void)startCallLogin:(NSString*)orderID result:(SobotCallResultBlock) resultBlock;
@end

NS_ASSUME_NONNULL_END
