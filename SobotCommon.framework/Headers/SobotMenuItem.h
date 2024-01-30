//
//  ZCMenuItem.h
//  SobotApp
//
//  Created by zhangxy on 16/5/18.
//  Copyright © 2016年 com.sobot.chat.app. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SobotMenuItem : NSObject

@property (nonatomic,strong) id       objTag;
@property (nonatomic,assign) int      intTag;
@property (nonatomic,assign) BOOL  checked;
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *iconImage;
@property (nonatomic,strong) UIFont   *titleFont;
@property (nonatomic,strong) UIColor  *textColor;
@property (nonatomic,strong) UIColor  *tintColor;

@property (nonatomic,assign) int textType;

@end
