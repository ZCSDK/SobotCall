//
//  SobotTextView.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/7.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotTextView : UITextView

/**
 *  占位文字
 */
@property (nonatomic ,copy) NSString *placeholder;

/**
 *  占位文字的颜色
 */
@property (nonatomic,strong) UIColor *placeholderColor;

@end

NS_ASSUME_NONNULL_END
