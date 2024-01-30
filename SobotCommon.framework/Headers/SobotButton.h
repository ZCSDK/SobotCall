//
//  SobotButton.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/7.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotButton : UIButton

// 扩展参数
@property(nonatomic,strong) id obj;

// normal状态图片名称
@property(nonatomic,strong) NSString *imageName;

// 选中状态图片名称
@property(nonatomic,strong) NSString *imageNameHighlighted;

// 边框颜色key
@property(nonatomic,strong) NSString *borderColorName;

@property(nonatomic,strong) NSString *bundleName;


-(void) addTapHandle:(void(^)(SobotButton *btnObj)) clickBlock;


@end

NS_ASSUME_NONNULL_END
