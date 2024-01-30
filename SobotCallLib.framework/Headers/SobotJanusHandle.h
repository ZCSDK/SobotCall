//
//  SobotJanusHandle.h
//  JanusiOS
//
//  Created by hello on 2019/11/27.
//  Copyright © 2019 Codeboy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SobotJanusHandle;

typedef void(^OnJoined)(SobotJanusHandle *handle);
typedef void(^OnRemoteJsep)(SobotJanusHandle *handle,NSDictionary *jsep);

// 用于客户端与服务器插件（例如：VideoRoom）上的业务处理类
@interface SobotJanusHandle : NSObject

@property (nonatomic, strong) NSNumber *handleId;
@property (nonatomic, strong) NSNumber *feedId;
@property (nonatomic, strong) NSString *display;

@property (nonatomic, copy) OnJoined onJoined;
@property (nonatomic, copy) OnRemoteJsep onRemoteJsep;
@property (nonatomic, copy) OnJoined onLeaving;

@end

NS_ASSUME_NONNULL_END
