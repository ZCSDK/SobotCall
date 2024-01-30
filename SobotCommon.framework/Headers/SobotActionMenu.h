//
//  SobotActionMenu.h
//
//  Created by zhangxy on 16/5/18.
//  Copyright © 2016年 com.sobot.chat.app. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotMenuItem.h"


@protocol SobotActionMenuDelegate <NSObject>

-(void) onActionMenuItem:(SobotMenuItem *) item;

@end

@interface SobotActionMenu : UIView

/**
 *  代理
 */
@property (nonatomic, weak  ) id <SobotActionMenuDelegate> delegate;
@property (nonatomic, assign) int                       selectIndex;


/**
 *  创建对象方法
 */
- (instancetype)initWithDelegate:(id<SobotActionMenuDelegate>)delegate arr:(NSArray *) array;

- (void) setActionClickBlock:(void (^)(SobotMenuItem *item)) ItemClickblock;

- (void)show;

- (void)dissmisMenu;

- (BOOL) isShowing;

@end
