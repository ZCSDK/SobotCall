//
//  SobotRefreshComponent.h
//  refresh
//
//  Created by zhaomengWang on 17/3/24.
//  Copyright © 2017年 MaoChao Network Co. Ltd. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "SobotRefreshHelper.h"
#import "SobotCommonDefine.h"


#define SobotRefreshHeaderHeight 60
#define SobotRefreshFooterHeight 60
#define SOBOT_REFRESH_COLOR   UIColorFromModeColor(SobotColorTextSub)
#define SOBOT_REFRESH_FONT    SobotFontBold13
#define SOBOT_TIME_FONT          SobotFont13
#define SOBOT_TRANS_FORM CATransform3DConcat(CATransform3DIdentity, CATransform3DMakeRotation(M_PI+0.000001, 0, 0, 1))
extern NSString *const SobotRefreshHeaderTime;
extern NSString *const SobotRefreshMoreData;
/** 刷新控件的状态 */
typedef NS_ENUM(NSInteger, SobotRefreshState) {
    
    SobotRefreshStateNormal          = 0, //普通状态
    SobotRefreshStateWiSobotRefresh,         //松开就刷新的状态
    SobotRefreshStateRefreshing,          //正在刷新中的状态
    SobotRefreshStateNoMoreData           //没有更多的数据
};

@interface SobotRefreshComponent : UIView{
    SobotRefreshState _refreshState;
    UILabel *_messageLabel;
    UILabel *_laseTimeLabel;
}

@property (nonatomic, strong) UIImageView *arrowView;
@property (nonatomic, strong) UIActivityIndicatorView *loadingView;

/** 是否处于刷新状态 */
@property (nonatomic, assign) BOOL isRefreshing;

/** 回调对象 */
@property (nonatomic, weak) id refreshingTarget;

/** 回调方法 */
@property (nonatomic, assign) SEL refreshingAction;

#pragma mark - 交给子类去访问
/** 父控件 */
@property (weak,   nonatomic, readonly) UIScrollView *scrollView;

#pragma mark - 交给子类们去实现
/** 普通状态 */
- (void)soobtREFRESHNormal NS_REQUIRES_SUPER;

/** 松开就刷新的状态 */
- (void)sobotWiSobotRefresh NS_REQUIRES_SUPER;

/** 没有更多的数据 */
- (void)sobotNoMoreData NS_REQUIRES_SUPER;

/** 正在刷新中的状态 */
- (void)sobotBeginRefresh NS_REQUIRES_SUPER;

/** 刷新结束 */
- (void)sobotEndRefresh:(BOOL)more NS_REQUIRES_SUPER;

/** 初始化 */
- (void)prepare NS_REQUIRES_SUPER;

-(void)hideTextView;

/** 创建子视图 */
- (void)createViews;

/** 当scrollView的contentOffset发生改变的时候调用 */
- (void)scrollViewContentOffsetDidChange:(NSDictionary *)change;

/** 当scrollView的contentSize发生改变的时候调用 */
- (void)scrollViewContentSizeDidChange:(NSDictionary *)change;

/** 当scrollView的拖拽状态发生改变的时候调用 */
- (void)scrollViewPanStateDidChange:(NSDictionary *)change;

/** 更新刷新控件的状态 */
- (void)updateRefreshState:(SobotRefreshState)refreshState;

/** 移除kvo监听 */
- (void)removeObservers;

@end
