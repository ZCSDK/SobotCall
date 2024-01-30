//
//  UITableView+SobotRefresh.h
//  refresh
//
//  Created by zhaomengWang on 17/3/16.
//  Copyright © 2017年 MaoChao Network Co. Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotRefreshHeaderView.h"
#import "SobotRefreshFooterView.h"

@interface SobotScrollView:UIScrollView

- (void)setSobotRefreshHeader:(SobotRefreshHeaderView *)aRefreshHeader;
- (SobotRefreshHeaderView *)SobotRefreshHeader;

- (void)setSobotRefreshFooter:(SobotRefreshFooterView *)aRefreshFooter;
- (SobotRefreshFooterView *)SobotRefreshFooter;

@end
