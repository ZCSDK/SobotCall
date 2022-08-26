//
//  SobotCallClient.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCallSDK/SobotCallCacheEntity.h>


NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SobotCallListenerState) {
    SobotCallListenerStateConnected = 1,
    SobotCallListenerStateSipRegistered, // 注册
    SobotCallListenerStateSipClosed,     // 关闭sip话机
    SobotCallListenerStatePageClosed,    // 退出SDK页面
};

typedef void(^SobotCallListenerBlock)(SobotCallListenerState state,id _Nullable obj);// 监听事件


@protocol  SobotCallClientDelegate <NSObject>

-(void)onCallStateChanged:(SobotCallListenerState) state objcect:(id _Nullable )obj;

@end

@interface SobotCallClient : NSObject

@property(nonatomic,weak)id <SobotCallClientDelegate>delegate;
@property (nonatomic,copy) SobotCallListenerBlock callListernerBlock;

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



// 自使用
-(void)postCallListenerState:(SobotCallListenerState ) state object:(id _Nullable) obj;


@end
NS_ASSUME_NONNULL_END
