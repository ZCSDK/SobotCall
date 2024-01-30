//
//  SobotNetworkObserve.h
//  SobotNetwork
//
//  Created by zhangxy on 2021/9/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 自定义超时时间，每次请求header中增加此参数，单位毫秒，默认30秒
FOUNDATION_EXPORT NSString * const SobotNetworkChanged;

@interface SobotNetworkObserve : NSObject

/**
 *  如果没有连接到网络就弹出提醒实况
 */
@property (assign, nonatomic) BOOL isSobotReachable;

/**
 *  是否为WIFI
 */
@property (assign, nonatomic) BOOL isSobotReachableWiFi;

/**
 *  是否为WLAN
 */
@property (assign, nonatomic) BOOL isSobotReachableWLAN;


/**
 *  网络状态
 */
@property (strong, nonatomic) NSString * sobotNetWorkStatusString;

/**
 *  单例
 *
 *  @return ZCLibNetworkTools创建的对象
 */
+(SobotNetworkObserve *) shareSobotNetworkObserve;


/**
 *  移除网络监听
 */
-(void)removeNetworkObserver;

@end

NS_ASSUME_NONNULL_END
