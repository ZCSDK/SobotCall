//
//  SobotCallMessageTools.h
//  SobotCallLib
//
//  Created by zhangxy on 2023/12/11.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,SobotCallMessageEvent) {
    SobotCallMessageEventOnline = 1, // 消息中带的状态为在线，会先发一个上线通知，然后继续处理消息
    SobotCallMessageEventHangup,//挂断电话
    SobotCallMessageEventLogOutOrConnectChanged,//退出或连接中断，取消注册
    SobotCallMessageEventDialing,//接通电话
    SobotCallMessageEventRinging,//被呼入来电  正常来电 、被转移来电、咨询来电
    SobotCallMessageEventAgentReady,//坐席准备好了，可以正常拨号
    SobotCallMessageEventEstablished,//对方接通了，关闭铃声，显示接听界面 开始计时
    SobotCallMessageEventPartyChanged,// 三方会议
    SobotCallMessageEventPartyDeleted,// 三方变2方通话
    SobotCallMessageEventPartyAdd,// 三方强插
    SobotCallMessageEventNotReady,// 置忙，不做任何处理，内部已做弹窗提醒
    SobotCallMessageEventReady,// 强制置闲，不做任何处理，内部已做弹窗提醒
    SobotCallMessageEventLogout,// 强制离线，不做任何处理，内部已做弹窗提醒
    SobotCallMessageEventReleased, // 不知道干啥的，做挂断处理
    SobotCallMessageEventPartyError, // 通话错误
    SobotCallMessageEventError, // 错误事件
    SobotCallMessageEventPartyCallDeleted, //取消
    SobotCallMessageEventMutedOrUnmuted, //静音
    SobotCallMessageEventWebSocketSession,// 通道异常重连
    SobotCallMessageEventUnreachable,//链接设备异常
    SobotCallMessageEventTierRemoved,// 移除技能组
    SobotCallMessageEventTierAdded,// 添加技能组
};

NS_ASSUME_NONNULL_BEGIN

// 直接返回当前消息
#define SobotCall_WEBSOCKET_MESSAGE @"SobotCALL_WEBSOCKET_MESSAGE"

// 处理后的消息对象
//@{event:messageID:obj:extends}
#define SobotCall_WEBSOCKET_EventMESSAGE @"SobotCALL_WEBSOCKET_EventMESSAGE"

// 链接点击
typedef BOOL (^SobotCallReceiptMessage)(NSString * _Nullable common,NSString * _Nullable body);
typedef void (^SobotWebSocketConnect)(BOOL isChecked,NSString *url);
typedef BOOL (^SobotCallScribeMessage)(NSString * _Nullable common,NSDictionary *header,NSString *messageId,NSDictionary *content);

@interface SobotCallMessageTools : NSObject

+(SobotCallMessageTools *)getSobotCallMessageTools;
 
@property(nonatomic,strong) SobotCallReceiptMessage callReceiptMessageHandler;
@property(nonatomic,strong) SobotWebSocketConnect callConnectHandler;
@property(nonatomic,strong) SobotCallScribeMessage callScribeMessageHandler;

-(BOOL)checkWebSocketConnected;

-(void)connect;
-(BOOL)isConnected;

-(void)disconnect;

-(void)sendMessage:(NSString *) message;

-(void)getCurrentAgentStatus:(SobotCallReceiptMessage) hander;
// 重连
-(void)reconnect;
-(void)networkReconnect;
@end

NS_ASSUME_NONNULL_END

