//
//  SobotTcpDataProcessor.h
//  SobotTcpServer
//  处理接受到消息、发送通知
//  Created by zhangxy on 2021/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,SobotTcpConnectStatus){
    SobotTcpConnectStatusFailed = 0,
    SobotTcpConnectStatusStart  = 1,
    SobotTcpConnectStatusSuccessed = 2,
    SobotTcpConnectStatusClose  = 3
};


@protocol SobotTcpDataDelegate <NSObject>

-(void)tcpNewMessage:(NSString *) jsonMessage dict:(NSDictionary *_Nullable) dictMessage messageType:(NSInteger )type appId:(NSString *_Nullable) appId;


/// 链接状态变化
/// @param status 当前状态
/// @param connectType  当前链接方式(socket = 0,http = 1,其他=2)
-(void)onConnectStatus:(SobotTcpConnectStatus) status type:(NSInteger) connectType;


@end


/// 解析消息
@interface SobotTcpDataProcessor : NSObject


/// 解析读取到的消息，如果设置delegate，将会吧解析后的消息以代理的发送出去
/// @param receivedMessage  原始的json消息
/// @param dictMessage           转换后的字典
/// @param delegate                  解析后消息代理
+(void)tcpDataMessage:(NSString *_Nullable) receivedMessage dict:(NSDictionary *_Nullable) dictMessage  delegate:(id<SobotTcpDataDelegate>) delegate;


@end

NS_ASSUME_NONNULL_END
