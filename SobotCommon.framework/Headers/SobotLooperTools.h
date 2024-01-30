//
//  SobotLooperTools.h
//  SobotTcpServer
//
//  Created by zhangxy on 2021/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 执行轮询时的代理
@protocol SobotLooperTaskDelegate <NSObject>

-(void)onLooperTask:(NSTimer *) timer;

@end

// 执行轮询是的调用，设置就运行
typedef void(^SobotLooperTaskBlock)(NSTimer *timer);

@interface SobotLooperTools : NSObject

// 非单例方法，每次都会创建新的对象
+(SobotLooperTools *) shareSobotLooperTools;


/// 开启一个轮询
/// @param spaceTime  轮询间隔
-(void)startLooper:(NSTimeInterval) spaceTime taskBlock:(SobotLooperTaskBlock) block;
-(void)startLooper:(NSTimeInterval) spaceTime delegate:(id<SobotLooperTaskDelegate>) delegate;


/// 检查轮询是否正常，如果停止则重新开启
-(void)checkLooperState;


/// 关闭轮询
-(void)stopLooper;


@end

NS_ASSUME_NONNULL_END
