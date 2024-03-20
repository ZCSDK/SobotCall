//
//  SobotJanusUtils.h
//  janusTest
//
//  Created by zhangxy on 2022/7/23.
//

#import <Foundation/Foundation.h>
#import <SobotCallLib/SobotJanusCore.h>
#import <WebRTC/RTCPeerConnection.h>

/// SIP Events
@protocol SobotJanusClientDelegate<NSObject>
@optional
- (void)onDidRegisterJanus:(id _Nullable)janusCore;

- (void)onCallIncomingJanus:(id _Nullable)janusCore;
- (void)onCallClosedJanus:(id _Nullable)janusCore;
@end

NS_ASSUME_NONNULL_BEGIN

@interface SobotJanusUtils : NSObject

@property (nonatomic, strong) SobotJanusCore *janusCore;

// 正在重连janus,预防重复操作
@property(nonatomic,assign) BOOL isReJanus;

// 网络发生变化，此时要重新发送update
@property(nonatomic,assign) BOOL isNetWorkChanged;

@property (nonatomic,assign) RTCIceConnectionState iceConnectionState;

@property (nonatomic) id<SobotJanusClientDelegate> delegate;

// createSession,attach
+(SobotJanusUtils *)getSobotJanusUtils;

// register
-(void)createConnect:(NSString *) username password:(NSString *)pass domain:(NSString *) domain;
-(void)reCreateSocket;
-(void)createSocket;
-(BOOL)isRegister;
-(void)doRegister;
-(void)unRegister;
-(void)answer;
-(void)jcConnectClose;
-(void)toUpdate;

-(void)checkSocketUrl;

// janus 重连ice
-(void)janusIceReCreate;
@end

NS_ASSUME_NONNULL_END
