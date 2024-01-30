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


/// 获取工单SDK 版本号
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

/// 登录
/// @param account 账号
/// @param loginPwd 密码
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account password:(NSString * )loginPwd result:(SobotCallResultBlock) resultBlock;

/// 登录（使用token）
/// @param account 账号
/// @param loginPwd 密码
/// @param token token
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account password:(NSString * )loginPwd  token:(NSString *) token  result:(SobotCallResultBlock) resultBlock;

/// 设置是否 Debug模式，默认为NO，不显示日志
/// @param isShowDebug  YES or NO
+(void)setShowDebug:(BOOL) isShowDebug;


/// 启动SDK 进入呼叫SDK首页
/// @param account  账号
/// @param loginPwd 密码
/// @param vc 启动VC
/// @param resultBlock 回调结果
+(void)startWithAcount:(NSString *)account password:(NSString *)loginPwd viewController:(UIViewController *)vc result:(SobotCallResultBlock) resultBlock;

/// 添加启动页面
/// token 非accessToken,账号登录返回的地址，内部自动判断新旧版本
+(void)startWithToken:(NSString *) token viewController:(UIViewController *) vc result:(SobotCallResultBlock) resultBlock;

///  设置SobotCall状态监听
///   status 外呼的状态
+(void)setSobotCallListener:(void(^)(int code ,SobotCallListenerState state,id _Nullable object,id _Nullable obj,NSString *_Nullable msg))listenerBlock;

+(void)unRegister;

@end

NS_ASSUME_NONNULL_END
