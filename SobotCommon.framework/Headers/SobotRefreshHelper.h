//
//  SobotRefreshHelper.h
//  LLFeature
//
//  Created by WangZhaomeng on 2017/10/25.
//  Copyright © 2017年 WangZhaomeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SobotRefreshHelper : NSObject

/** 获取上次更新时间 */
+ (NSString *)sobotGetRefreshTime:(NSString *)key;

/** 重置更新时间 */
+ (void)sobotSetRefreshTime:(NSString *)key;

/** 箭头 */
+ (UIImage *)sobotArrowImage;

@end
