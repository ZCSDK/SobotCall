//
//  ZCMenuCell.h
//  SobotApp
//
//  Created by zhangxy on 16/5/18.
//  Copyright © 2016年 com.sobot.chat.app. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotMenuItem.h"

#define ItemHeight 40.0f

@interface SobotMenuCell : UITableViewCell

// 显示时间
@property (nonatomic,strong) UILabel                 *titleLabel;

// 头像
@property (nonatomic,strong) UIImageView             *iconView;


-(void) InitDataToView:(SobotMenuItem *) item;

@end
