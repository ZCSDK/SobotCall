//
//  ZCUIToastTools.h
//  SobotKitLit
//
//  Created by zhangxy on 15/11/18.
//  Copyright © 2015年 zhichi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
/**
 *  SobotToastPosition
 */
typedef NS_ENUM(NSInteger,SobotToastPosition) {
    /**
     *  中心
     */
    SobotToastPositionCenter = 0,
    /**
     *  顶部
     */
    SobotToastPositionTop    = 1,
    /**
     *  底部
     */
    SobotToastPositionBottom = 2,
};

/**
 *  ZC Toast工具类
 */
@interface SobotToast : NSObject

/**
 *  单例
 *
 *  @return ZCUIToastTools创建的对象
 */
+(id)shareToast;

-(void)showToast:(NSString *) text;

-(void)showToast:(NSString *) text duration:(CGFloat) duration position:(SobotToastPosition)position;

/**
 *  展示Toast
 *
 *  @param text     展示的文字
 *  @param duration 展示的时间
 *  @param byView   添加到View上
 *  @param position 位置（中心 顶部 底部）
 */
-(void)showToast:(NSString *) text duration:(CGFloat) duration view:(UIView *) byView position:(SobotToastPosition) position;


/**
 *  展示Toast loading
 *
 *  @param status 状态
 *  @param byView 添加的位置
 */
-(void)showProgress:(NSString *) status with:(UIView *) byView;
-(void)dismisProgress;


/**
 *  展示Toast
 *  @param text     展示的文字
 *  @param position   位置（中心 顶部 底部）
 *  @param image    展示图片
 */
-(void)showToast:(NSString *) text position:(SobotToastPosition) position Image:(UIImage*)image;
/**
 *  展示Toast
 *
 *  @param text     展示的文字
 *  @param position 位置（中心 顶部 底部）
 *  @param image    展示图片
 *  @param duration 展示的时间
 *  @param byView   添加到View上
 *
 *
 */
-(void)showToast:(NSString *) text duration:(CGFloat) duration view:(UIView *) byView position:(SobotToastPosition) position Image:(UIImage*)image;

@end
