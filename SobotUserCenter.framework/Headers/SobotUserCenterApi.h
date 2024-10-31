//
//  SobotUserCenterApi.h
//  SobotUserCenter
//
//  Created by zhangxy on 2024/4/28.
//

#import <Foundation/Foundation.h>
#import <SobotUserCenter/SobotUKitConfig.h>
#import <SobotCommon/SobotCommon.h>
#import <SobotUserCenter/SobotUserCenterDefines.h>
#import <SobotUserCenter/SobotUserCenterClient.h>
#import <SobotUserCenter/SobotUserEntity.h>

#pragma mark -- 用户中心 交互事件
typedef NS_ENUM(NSUInteger, SobotUserCenterActionType) {
    SobotUserCenterActionTypeClickChat = 1, // 跳转在线页面
    SobotUserCenterActionTypeClickCallDetail = 2,// 跳转到呼叫详情页面
    SobotUserCenterActionTypeClickOrderDetail = 3,// 跳转到工单详情页面
    SobotUserCenterActionTypeClickCallTel = 4,// 拨号外呼
};


// code == 1成功
typedef void(^SobotResultBlock)(NSInteger code,id _Nullable obj,NSString *_Nullable msg);

// type 0 打电话 1 获取当前是否正在通话 是否同一个工单会话  2 获取电话条是否签入
typedef void(^SoboUserResultBlock)(NSString *_Nullable userNick, NSString *_Nullable orderId,NSDictionary *_Nullable callDict ,int type,NSString *_Nullable customId,SobotUserEntity *userModel);

NS_ASSUME_NONNULL_BEGIN

@interface SobotUserCenterApi : NSObject

+(NSString *)sobotGetSDKVersion;
+(NSString *)sobotGetSDKChannel;


/// 更改kitConfig配置
/// @param kitConfig  congfig配置
+(void)configKitInfo:(SobotUKitConfig *) kitConfig;

/// 初始化配置
/// @param host 域名
/// @param config  SobotCacheEntity 配置类
/// @param kitInfo SobotKitConfig 配置类
/// @param resultBlock 初始化回调 (NSInteger code,id _Nullable obj,NSString *_Nullable msg)；
+(void)initWithHost:(NSString *)host config:(SobotCacheEntity *)config  kitInfo:(SobotUKitConfig *)kitInfo result:(SobotResultBlock) resultBlock;

/// 启动SDK 进入工单SDK首页
/// @param account  账号
/// @param loginPwd 密码
/// @param vc 启动VC
/// @param resultBlock 回调结果
+(void)startWithAcount:(NSString *)account password:(NSString *)loginPwd viewController:(UIViewController *)vc result:(SobotResultBlock) resultBlock;

/// 启动SDK 使用token
/// @param token token
/// @param account 账号
/// @param vc 密码
/// @param resultBlock 回调结果
+(void)startWithToken:(NSString *)token loginUser:(NSString *) account viewController:(UIViewController *)vc  result:(SobotResultBlock) resultBlock;

/// 打开工单详情页面
/// @param vc 启动VC
/// @param ticketId 工单ID
/// @param resultBlock 回调结果
+(void)startOrderDetail:(UIViewController *) vc orderId:(NSString *) ticketId  result:(SobotResultBlock) resultBlock;

/// // 直接进入创建工单页面 创建工单，提交后退出
/// @param vc  启动VC
/// @param params 入参  @{@"uname':@"传创建工单的客服昵称",@"userId":@"传创建工单的客服ID"}
/// @param resultBlock 回调结果
+(void)startCreateOrder:(UIViewController *)vc params:(NSDictionary * _Nullable)params result:(SobotResultBlock) resultBlock;

/// 退出SDK
/// @param resultBlock 回调结果
+(void)outSobotUser:(SobotResultBlock) resultBlock;

/// 登录
/// @param account 账号
/// @param loginPwd 密码
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account password:(NSString * )loginPwd result:(SobotResultBlock) resultBlock;

/// 登录（使用token）
/// @param account 账号
/// @param loginPwd 密码
/// @param token token
/// @param resultBlock 回调结果
+(void)loginUser:(NSString *)account password:(NSString * )loginPwd  token:(NSString *) token  result:(SobotResultBlock) resultBlock;

/// 设置是否 Debug模式，默认为NO，不显示日志
/// @param isShowDebug  YES or NO
+(void)setShowDebug:(BOOL) isShowDebug;



/// 回复外呼事件
/// @param resultBlock resultBlock description
+(void)callActionResultBlock:(SoboUserResultBlock) resultBlock;

// 仅App使用 SDK不没有呼叫功能 不能使用语音回复
+(void)setIsAddCall:(BOOL)isAddCall;


/// 打开用户详情页面或者编辑界面
/// @param vc 传入的VC
/// @param type 0 用户详情 1 用户编辑页面
/// @param userModel userModel description
/// @param resultBlock resultBlock description
+(void)startUserDetailOrEditView:(UIViewController *) vc type:(int)type userModel:(SobotUserEntity *)userModel  resultBlock:(SobotResultBlock) resultBlock;
@end

NS_ASSUME_NONNULL_END
