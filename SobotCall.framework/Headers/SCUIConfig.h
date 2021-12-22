//
//  SCUIConfig.h
//  SobotCall
//
//  Created by lizh on 2021/12/9.
//  Copyright © 2021 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface SCUIConfig : NSObject

/**
 *   拨号界面数字的文字颜色 （1 2 3 4 5 6 7 8 9 0）
 */
@property (nonatomic,strong) UIColor *numberTextColor;

/**
 *    拨号界面字母文字颜色 （abc 、# 等）
 */
@property (nonatomic,strong) UIColor *charTextColor;

/**
 *    接听页面背景色
 */
@property (nonatomic,strong) UIColor *accpetViewBgColor;

/**
 *    拨号界面 电话号 区域 背景色
 */
@property (nonatomic,strong) UIColor *callViewBgColor;


/**
 *    拨号界面 键盘 区域 背景色
 */
@property (nonatomic,strong) UIColor *callViewKeyBoardBgColor;

/**
 *  通话界面 文字颜色
 */
@property (nonatomic,strong) UIColor *accpetViewTextColor;

@end

NS_ASSUME_NONNULL_END
