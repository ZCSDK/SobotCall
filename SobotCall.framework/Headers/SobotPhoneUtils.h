//
//  SobotPhoneUtils.h
//  DemoLinphone
//
//  Created by RedArrows on 2019/7/3.
//  Copyright © 2019 Sobot. All rights reserved.
//  version 1.0

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


//自定义打印
//#define SobotLog(format, ...) {\
//if ([SobotPhoneUtils logEnable]) {\
//NSLog(@"[Sobot]: %s():%d " format, __func__, __LINE__, ##__VA_ARGS__);\
//}\
//}\

@protocol SobotPhoneUtilsDelegate <NSObject>

//更多的通话状态需要通过轮询pass平台来检测

/**
 * linphone核心已开启
 */
- (void) SobotPhoneCoreOn;

/**
 * linphone核心已关闭
 */
- (void) SobotPhoneCoreOff;

/**
 * 注册成功
 */
- (void) SobotPhoneRegistrationOK;
/**
 * 注册失败
 */
- (void) SobotPhoneRegistrationFailed;

/**
 * 清除账号回调
 */
- (void) SobotPhoneRegistrationCleared;

/**
 * 来电通知
 */
- (void) SobotPhoneCallReceived;


/**
 * 电话被挂断
 */
- (void) SobotPhoneCallReleased;

/**
 * 接通电话
 */
- (void) SobotPhoneCallStreamsRunning;


@end



@interface SobotPhoneUtils : NSObject

+(SobotPhoneUtils *)shareInstance;

@property (nonatomic,copy)NSString *sip_address;// sip话机注册域名

//状态回调代理对象 
@property (nonatomic, weak)id<SobotPhoneUtilsDelegate> delegate;


/**
 启动linphone核心类，必须在启动完成后才能，执行后续操作
 */
-(void)startLinphoneCore;

/**
 注册sip服务器 确保startLinphoneCore执行完成才能进行这一步

 @param name sip账号
 @param password sip密码
 @param host 你的SIP服务器地址:你的SIP服务所使用的端口
 @param transportType 传输协议 UDP   TCP    TLS
 */
-(void)registerUser:(NSString *)name password:(NSString *)password host:(NSString *)host transportType:(NSString *)transportType;


/**
 sip接电话方法
 */
- (void)acceptCall;

/**
 sip话机挂断
 */
-(void)hangUp;

/**
 注销用户
 登出当前账号，如果不登出下次启动LinphoneCore时。会自动登录已注册账号
 */
-(void)logoutUser;

/**
 销毁LinphoneCore，
 再次启用时需startLinphoneCore
 */
-(void)destroyLinphoneCore;


/**
 开启扬声器

 @param isSpeaker 是否开启扬声器
 */
-(void)toggleSpeaker:(BOOL)isSpeaker;


/**
 呼出
 */
-(void)callOutNumber:(NSString *)num;


@end

