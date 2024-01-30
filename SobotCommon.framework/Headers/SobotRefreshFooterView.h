//
//  SobotRefreshFooterView.h
//  refresh
//
//  Created by zhaomengWang on 17/3/16.
//  Copyright © 2017年 MaoChao Network Co. Ltd. All rights reserved.
//
// 上拉刷新，添加如下代码无效
//- (void)scrollViewDidScroll:(UIScrollView *)scrollView
//

#import "SobotRefreshComponent.h"

@interface SobotRefreshFooterView : SobotRefreshComponent

+ (instancetype)footerWithRefreshingTarget:(id)target refreshingAction:(SEL)action;
- (void)sobotEndRefresh;

@end
