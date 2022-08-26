//
//  SobotCallUIDelegate.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SobotCallUIDelegate <NSObject>

@optional
-(void)getAllTaskDetails; // 获取我的任务列表数据


-(void)onAgentSipAcounts:(NSMutableArray *) arr;

@end

NS_ASSUME_NONNULL_END
