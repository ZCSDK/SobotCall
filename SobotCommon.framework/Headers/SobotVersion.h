//
//  SobotVersion.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotVersion : NSObject

// 当前打包的build
+(int)getVersionBuild;

// 当前SDK版本号
+(NSString *)getVersionString;

// 当前打包的渠道
+(NSString *)getChannel;

// 获取 SSKeychain方式生成uuid
+(NSString *)getSobotUUID;

// iOS 系统版本
+(NSString *)getSystemVersion;

// 手机型号
+(NSString*)getDeviceName;
@end

NS_ASSUME_NONNULL_END
