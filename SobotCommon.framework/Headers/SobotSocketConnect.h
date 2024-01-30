//
//  SobotSocketConnect.h
//  SobotTcpServer
//
//  Created by zhangxy on 2021/9/23.
//

#import <Foundation/Foundation.h>
#import "SobotTcpDataProcessor.h"

NS_ASSUME_NONNULL_BEGIN

@interface SobotSocketConnect : NSObject

// socket链接地址
@property (strong, nonatomic) NSString *tcpAddress;

+(SobotSocketConnect *)shareSocketConnect;

/// 创建新的链接，如果已经创建会断开重新链接
/// @param address  链接的地址，例如127.0.0.1:8080
-(void)connect:(NSString *) address delegate:(id<SobotTcpDataDelegate> _Nullable) delegate;


/// 检查是否链接，如果未链接，则尝试链接
-(void)checkConnect;


/// 断开链接
-(void)closeConnected;

// 仅能发布文本
-(void)sendMessage:(NSString *) text;


/// 字典不能为空
/// @param dict 必须包含事例字段
///  [exDict setObject:dict[@"u"] forKey:@"u"];
///  [exDict setObject:dict[@"deviceToken"] forKey:@"deviceToken"];
///  [exDict setObject:dict[@"appid"] forKey:@"appid"];
///  [exDict setObject:dict[@"puid"] forKey:@"puid"];
///  [exDict setObject:dict[@"debug"] forKey:@"debug"];
///  connectMsgId = dict[@"msgId"];
-(void)sendConnectMessage:(NSDictionary *)dict;



/// 检查消息类型，判断重复，心跳
/// @param dict 
-(BOOL)checkMessageUnUsed:(NSDictionary *) dict;


@end

NS_ASSUME_NONNULL_END
