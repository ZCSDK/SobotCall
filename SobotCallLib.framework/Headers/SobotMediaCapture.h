//
//  SobotMediaCapture.h
//  JanusiOS
//
//  Created by hello on 2019/11/26.
//  Copyright © 2019 Codeboy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebRTC/WebRTC.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotMediaCapture : NSObject
@property (nonatomic, strong) RTCPeerConnectionFactory *factory;
@property (nonatomic, strong) RTCCameraVideoCapturer *capture;
@property (nonatomic, strong) RTCVideoTrack *videoTrack;
@property (nonatomic, strong) RTCAudioTrack *audioTrack;

- (void)createPeerConnectionFactory;

- (void)createLocalMedia:(nullable RTCCameraPreviewView *)localView;

- (void)switchCamera;

// 停止录音
- (void)janusStopAecDump;

@end

NS_ASSUME_NONNULL_END
