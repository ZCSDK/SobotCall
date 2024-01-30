//
//  SobotJanusConnection.h
//  JanusiOS
//
//  Created by hello on 2019/11/27.
//  Copyright © 2019 Codeboy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebRTC/WebRTC.h>

@class SobotJanusConnection;

NS_ASSUME_NONNULL_BEGIN

// 收到远端流处理
typedef void (^OnAddStream)(SobotJanusConnection *connect, RTCPeerConnection *peerConnection, RTCMediaStream *stream);

// 收到候选者
typedef void (^OnIceCandidate)(SobotJanusConnection *connect, RTCPeerConnection *peerConnection, RTCIceCandidate *candidate);

// 处理与Janus媒体连接的对象 ， 每一路连接都是一个SobotJanusConnection
@interface SobotJanusConnection : NSObject

@property (nonatomic, strong) NSNumber *handleId;

@property (nonatomic, strong) RTCPeerConnection *connection; // WebRTC连接对象
@property (nonatomic, strong) RTCVideoTrack *videoTrack;     // 视频轨
@property (nonatomic, strong) RTCEAGLVideoView *videoView;

@property (nonatomic, copy) OnAddStream onAddStream;
@property (nonatomic, copy) OnIceCandidate onIceCandidate;

- (RTCPeerConnection *)createPeerConnection:(RTCPeerConnectionFactory *)factory
                                 audioTrack:(RTCAudioTrack *)audioTrack
                                 videoTrack:(RTCVideoTrack *)videoTrack;

- (void)createOfferWithCompletionHandler:
        (nullable void (^)(RTCSessionDescription *sdp, NSError *error))completionHandler;

- (void)createOfferIsRestart:(BOOL)isRestart WithCompletionHandler:(nullable void (^)(RTCSessionDescription *sdp, NSError *error))completionHandler;

// 创建answer
- (void)createAnswerWithCompletionHandler:
        (nullable void (^)(RTCSessionDescription *sdp, NSError *error))completionHandler;

- (void)setRemoteDescriptionWithJsep:(NSDictionary *)jsep;

- (void)close;

- (void)removeStream;

@end

NS_ASSUME_NONNULL_END
