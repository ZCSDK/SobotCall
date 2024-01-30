//
//  SobotTableView.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/20.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotRefreshFooterView.h"
#import "SobotRefreshHeaderView.h"

NS_ASSUME_NONNULL_BEGIN

@interface SobotTableView : UITableView

- (void)setSobotRefreshHeader:(SobotRefreshHeaderView *)aRefreshHeader;
- (SobotRefreshHeaderView *)SobotRefreshHeader;

- (void)setSobotRefreshFooter:(SobotRefreshFooterView *)aRefreshFooter;
- (SobotRefreshFooterView *)SobotRefreshFooter;

@end

NS_ASSUME_NONNULL_END
