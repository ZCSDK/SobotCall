//
//  SobotJanusCore.h
//  JanusiOS
//
//  Created by hello on 2019/11/28.
//  Copyright © 2019 Codeboy. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SobotCallLib/SobotJanusHandle.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^OnMessage)(SobotJanusHandle *handle, NSDictionary *msg, NSDictionary *jsep, SobotJanusHandle *feedHanle);


// code == 0 成功
typedef void (^OnSocketConnect)(int code);
typedef void (^OnMessageError)(int code,NSDictionary *dict);

@interface SobotJanusCore : NSObject

@property (nonatomic , copy) OnMessage onMessage;
@property (nonatomic , copy) OnSocketConnect OnSocketConnect;
@property (nonatomic , copy) OnMessageError OnMessageError;
@property (nonatomic, strong) NSNumber *sessionId;
@property (nonatomic, assign) BOOL isOpen;

+(NSString *)randomStringWithLength:(int)len;
// 重连 重新创建socket
-(void)reCreateSocketWithUrl:(NSURL *)url;
- (instancetype)initWithURL:(NSURL *)url;

// 创建会话
- (void)createSession:(nullable void (^)(NSDictionary *data))completionHandler;

// 自身，即发送者，创建与服务器插件的连接
- (void)publisherCreateHandler:(NSString *)plugin
                       opaueId:(NSString *)opaqueId
                       success:(nullable void (^)(NSDictionary *data))completionHandler
                         error:(nullable void (^)(NSDictionary *data))error;

// 发送候选者
- (void)trickleCandidate:(NSNumber *)handleId candidate:(NSDictionary *)candidate;

// 处理远端发送者的媒体信息
- (void)subscriberCreateHandle:(NSNumber *)feed
                       display:(NSString *)display
                        plugin:(NSString *)plugin
                       success:(nullable void (^)(SobotJanusHandle *handle))success
                    remoteJsep:(OnRemoteJsep)remoteJsep
                       leaving:(OnJoined)onLeaving
                      opaqueId:(NSString *)opaqueId;

// 发送消息通用方法
- (void)sendMessage:(NSDictionary *)body
           handleId:(NSNumber *)handleId
               jsep:(NSDictionary *  _Nullable)jsep;

- (void)unRegister;

// 加入房间
- (void)publisherJoinRoom:(NSDictionary *)data body:(NSDictionary *)body
                 onJoined:(nullable void (^)(SobotJanusHandle *handle))onJoined
             onRemoteJsep:(nullable void (^)(SobotJanusHandle *handle, NSDictionary *jsep))onRemoteJsep;

// 订阅者离开
- (void)subscriberOnLeaving:(SobotJanusHandle *)handle
          completionHandler:(nullable void (^)(SobotJanusHandle *handle))completionHandler;
// 更新
-(void)updateJanus;
-(void)goOpen;
-(void)sendClaimWith:(NSNumber *)sessionId;
-(void)disconnect;

@end

NS_ASSUME_NONNULL_END
