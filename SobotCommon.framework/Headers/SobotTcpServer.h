//
//  SobotTcpServer.h
//  SobotTcpServer
//  socket调用方案
//  Created by zhangxy on 2021/8/26.
//

#import <Foundation/Foundation.h>
#import "SobotTcpDataProcessor.h"
#import "SobotSocketConnect.h"
#import "SobotLooperTools.h"

// 由于网络监听方式再Network库中，本模块没有网络实时变化监听
// 网络变化发送通知：包含：isSobotReachable和isSobotReachableWiFi两个信息


@interface SobotTcpServer : NSObject

extern NSString * const SobotTcpNetworkChanged;

+(NSString *) getTcpSerVersion;


+(SobotTcpServer *) shareSobotTcpServer;

// 备用地址
@property(nonatomic,strong) NSMutableArray       *wslinkbak;


/// 开启TCP链接
/// @param connectAddr 链接默认地址
/// @param whenBackAutoClose 退到后台是否主动断开
/// @param delegate  消息代理
-(void)startReceived:(NSString *) connectAddr autoClose:(BOOL) whenBackAutoClose delegate:(id<SobotTcpDataDelegate>) delegate;

/// 检查是否链接，如果未链接，则尝试链接
-(void)checkConnect;


/// 断开链接
-(void)closeConnected;

// 仅能发布文本
-(void)sendMessage:(NSString *) text;


/// 字典不能为空
/// @param dict 必须包含事例字段：u,deviceToken,appid,puid,debug,msgId
///  [exDict setObject:dict[@"u"] forKey:@"u"];
///  [exDict setObject:dict[@"deviceToken"] forKey:@"deviceToken"];
///  [exDict setObject:dict[@"appid"] forKey:@"appid"];
///  [exDict setObject:dict[@"puid"] forKey:@"puid"];
///  [exDict setObject:dict[@"debug"] forKey:@"debug"];
///  [exDict setObject:dict[@"msgId"] forKey:@"msgId"];
-(void)sendConnectMessage:(NSDictionary *)dict;



/// 检查消息类型，301，205，0 等无用消息
/// @param dict  消息体
-(BOOL)checkMessageUnUsed:(NSDictionary *)dict;

@end
