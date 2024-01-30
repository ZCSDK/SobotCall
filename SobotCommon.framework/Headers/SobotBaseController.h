//
//  SobotBaseController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotUITools.h"
#import "SobotCommonDefine.h"
#import "SobotFontColor.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,SobotButtonClick) {
    SobotButtonClickBack = 0,
    SobotButtonClickBackChat,
    SobotButtonClickClose,
    SobotButtonClickMenu,
    SobotButtonClickRight,
    SobotButtonClickItem1,
    SobotButtonClickItem2,
    SobotButtonClickItem3,
    SobotButtonClickTransfer,
    SobotButtonClickFavoriter,
    SobotButtonClickBlock,
    SobotButtonClickEdit, // 新建工单
    SobotButtonClickSearch,// 搜索工单
    SobotButtonClickCommit,// 提交
    SobotButtonClickMore,// 点击更多
    SobotButtonClickStart,// 标记
    SobotButtonClickSort,// 排序
    SobotButtonClickDelImg,//删除图片
    SobotButtonClickReply,// 回复工单
    SobotButtonClickActivate,//激活工单
    SobotButtonClickEvaluate,// 评价
    SobotButtonClickTEL,// 电话
};

@interface SobotBaseController : UIViewController

@property(nonatomic,strong) NSString *bundleName;
/**
 *  顶部的View
 */
@property(nonatomic,strong) UIView *topView;

// 顶部view 内容视图
@property(nonatomic,strong) UIView *topContentView;

/**
 *  关闭按钮（返回）
 */
@property(nonatomic,strong) UIButton *backButton;

/**
  更多按钮，SobotButtonClickRight
 */
@property(nonatomic,strong) UIButton *moreButton;

/**
 *  标题
 */
@property(nonatomic,strong) UILabel *titleLabel;

@property(nonatomic,strong) NSString *backTitle;

// 是否使用自定义导航栏 不使用系统导航栏
@property(nonatomic,assign) BOOL navcBarHidden;
/**
 *
 *  导航条底部线条
 *
 **/
@property (nonatomic,strong) UIView * bottomLine;


// 约束相关
@property(nonatomic,strong)NSLayoutConstraint *topViewEH;
@property(nonatomic,strong) NSLayoutConstraint *titleViewEW;
@property(nonatomic,strong)NSLayoutConstraint *titleViewEH;
@property(nonatomic,strong)NSLayoutConstraint *topViewPL;
@property(nonatomic,strong)NSLayoutConstraint *topViewPR;

@property(nonatomic,strong)NSLayoutConstraint *topContentViewPL;
@property(nonatomic,strong)NSLayoutConstraint *topContentViewPR;
@property(nonatomic,strong)NSLayoutConstraint *topContentViewEH;
-(void)goBack;

-(void)buttonClick:(UIButton *) sender;

// 打开新页面
-(void)autoOpenNewVC:(UIViewController *)controller;
-(void)openWithPresent:(UIViewController *)controller;
-(void)openNav:(UIViewController *)controller;
-(void)openWithPresent:(UIViewController *)controller sound:(NSString *__nullable)soundName animated:(BOOL) anmated;
-(void)openNav:(UIViewController *)controller sound:(NSString *__nullable)soundName;



// key=@(tag) value = @{title,img,imgsel}
@property(nonatomic,strong)NSDictionary *navItemsSource;
// 创建导航头
// 当self.navigationController && !self.navigationController.navigationBarHidden时，会自动调用createCustomTitleView
-(void)createVCTitleView;
/// 仅创建自定义导航栏， 后期不再使用，直接使用createVCTitleView
-(void)createCustomTitleView;


// 仅设置自定义导航，1.0.2之后废弃
-(void)setNavigationBarLeft:(NSArray *__nullable)leftTags right:(NSArray *__nullable)rightTags;


/// 设置导航
/// @param leftTags 左侧按钮
/// @param rightTags 右侧按钮
/// @param autoSetting 是否设置导航颜色
-(void)setNavigationBarLeft:(NSArray *__nullable)leftTags right:(NSArray *__nullable)rightTags setBarStyle:(BOOL) autoSetting;

/// 仅设置左右按钮
/// @param leftTags 左边
/// @param rightTags 右边
-(void)updateBannerLeftTags:(NSArray *__nullable)leftTags rightTags:(NSArray *__nullable)rightTags;


/// 设置顶部导航栏或者自定义View 左右按钮的数据 以及titleView的数据 、title数据
/// @param leftTags 左边按钮的数据
/// @param rightTags 右边按钮的数据
/// @param titleView titleview  自定义view 默认空
-(void)setLeftTags:(NSArray *__nullable)leftTags rightTags:(NSArray *__nullable)rightTags titleView:(UIView * __nullable)titleView ;
-(void)updateBannerLeftTags:(NSArray *__nullable)leftTags rightTags:(NSArray *__nullable)rightTags titleView:(UIView * __nullable)titleView;



/// 设置标题 （系统导航、自定义view）
/// @param titleName 标题昵称
-(void)setTitleName:(NSString *__nullable)titleName;
-(void)setNavTitle:(NSString *) title;


/// 设置导航颜色
/// - Parameter color: 导航颜色
-(void)setTopBackgroudColor:(UIColor *) color;
-(void)setTopBackgroudColor:(UIColor *) color titleColor:(UIColor *) titleColor;


// 获取nav上的button
-(UIButton *)getNavButtonWithTag:(NSInteger )tag;

// 获取页面内容的起始坐标
-(CGFloat )getVCContentY;


/// 当显示底部Bar菜单时，返回bar的高度
-(CGFloat) getVCBarHeight;

-(void)createPlaceHolderView:(UIView *) superView title:(NSString *) title desc:(NSString *__nullable )message image:(UIImage *__nullable )  tipImage block:(void(^__nullable)(UIButton *_Nonnull btn,NSInteger tag))  refreshClick;

-(void)createPlaceHolderView:(UIView *) superView title:(NSString *) title desc:(NSString *__nullable )message image:(UIImage *__nullable)  tipImage imgSize:(CGSize)size block:(void(^__nullable)(UIButton *_Nonnull btn,NSInteger tag)) refreshClick;
- (void)removePlaceholderView;

@end

NS_ASSUME_NONNULL_END

