//
//  SobotCallClient.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCallLib/SobotCallCacheEntity.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SobotCallListenerState) {
    SobotCallListenerStateConnected = 1,
    SobotCallListenerStateSipRegistered, // 注册
    SobotCallListenerStateSipClosed,     // 关闭sip话机
    SobotCallListenerStatePageClosed,    // 退出SDK页面
    SobotCallListenerStateLinkClick, // 超链点击事件（例如查看工单详情页面）
    SobotCallListenerStateOpenSipListener,// 开放接口的监听事件
};

/**
 *  SobotCallClient 监听事件
 *  code  成功和失败状态码
 *  status  监听的事件枚举
 *  object  可选参数
 *  obj  可选参数 
 *  msg  可选参数
 */
typedef void(^SobotCallListenerEventBlock)(int code ,SobotCallListenerState state,id _Nullable object,id _Nullable obj,NSString *_Nullable msg);

// SobotCallSDK 代理
@protocol  SobotCallClientDelegate <NSObject>

-(void)onCallStateChanged:(SobotCallListenerState) state objcect:(id _Nullable )obj;

@optional
-(void)setTabHidde:(BOOL)isHidde;

@end

// SobotCallSDK 开放接口 代理
@protocol SobotCallClientOpenDelegate <NSObject>

@optional
-(void)sobotCallOpenListenerobject:(id _Nullable)obj;

@end

@interface SobotCallClient : NSObject

/**
 *  总监听事件
 */
@property(nonatomic,copy) SobotCallListenerEventBlock callListenerEventBlock;
@property(nonatomic,weak)id <SobotCallClientDelegate>delegate;
@property(nonatomic,weak) id<SobotCallClientOpenDelegate> openDelegate;

+(SobotCallClient *) getSobotCallClient;

// 设置国际化/资源等本地化配置
-(void)initSDKWithConfig:(SobotCallCacheEntity * _Nullable)config;


// 当前登录状态
+(BOOL) isLogin;

// 获取版本
+(NSString *)sobotGetSDKVersion;

// 获取渠道
+(NSString *)sobotGetSDKChannel;

// 设置调试模式
+(void)showDebug:(BOOL) showDebug;

// 自使用  收集和触发回调事件 (仅处理内部事件使用。不对外)
-(void)postCallListenerState:(SobotCallListenerState ) state object:(id _Nullable) obj;

// 如果跳过呼叫登录，直接使用V6版本呼叫，登录成功后需要调用此方法唤起呼叫消息监听
-(void)connectCallWebSocket;

// 关闭呼叫消息监听，一般无需维护
-(void)disConnectCallWebSocket;

@end
NS_ASSUME_NONNULL_END
