//
//  SobotCallLibClient.h
//  SobotCallLib
//
//  Created by zhangxy on 2023/12/1.
//

#import <Foundation/Foundation.h>
#import <SobotCallLib/SobotCallCacheEntity.h>

// @{code:message:obj:extends}
#define SobotCallLibClientListener_NotificationMessage @"SobotCallLibClientListener_NotificationMessage"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SobotCallLibClientListener) {
    SobotCallLibClientListenerStateConnected = 1,
    SobotCallLibClientListenerStateSipRegistered, // 注册
    SobotCallLibClientListenerStateSipClosed,     // 关闭sip话机
    SobotCallLibClientListenerStatePageClosed,    // 退出SDK页面
    SobotCallLibClientListenerStateNetworkFail,    // 网络接口失败
    SobotCallLibClientListenerStateNetworkSuccess,    // 网络接口成功
    SobotCallLibClientListenerMessageStomp,    // 网络消息
    SobotCallLibClientListenerMessageJanus,    // 电话消息
    SobotCallLibClientListenerMessageJanusFail,    // 电话消息
    SobotCallLibClientListenerEventOpenUrl,    // 打开网络连接
    SobotCallLibClientListenerEventUpdateUI,    // UI变更
};


typedef void(^SobotCallLibClientListenerBlock)(SobotCallLibClientListener state,NSString *_Nullable message,id _Nullable obj,id _Nullable extends);// 监听事件

@protocol  SobotCallLibClientDelegate <NSObject>

-(void)onCallStateChanged:(SobotCallLibClientListener) state mesage:(NSString *_Nullable) message objcect:(id _Nullable )obj extends:(id _Nullable) extends;

@end

@interface SobotCallLibClient : NSObject

+(NSString *)sobotGetCallLibVersion;

+(SobotCallLibClient *)getSobotCallClient;

@property(nonatomic,weak)id <SobotCallLibClientDelegate>delegate;

// 呼叫页面，有链接点击后，可以监听链接点击事件
@property(nonatomic,copy) SobotCallLibClientListenerBlock _Nullable sobotCallLibListenerBlock;

// 设置国际化/资源等本地化配置
-(void)initSDKWithConfig:(SobotCallCacheEntity * _Nullable)config bundleName:(NSString * _Nullable ) bundleName;

// 当前登录状态
+(BOOL) isLogin;

// 设置调试模式
+(void)showDebug:(BOOL) showDebug;

// 自使用
-(void)postCallLibListenerState:(SobotCallLibClientListener)state mesage:(NSString * _Nullable)message objcect:(id _Nullable)obj extends:(id _Nullable)extends;

@end

NS_ASSUME_NONNULL_END
