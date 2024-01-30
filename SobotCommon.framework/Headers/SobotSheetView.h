//
//  SobotSheetView.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/11.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotButton.h"

NS_ASSUME_NONNULL_BEGIN

@interface SobotSheetView : UIView

// 如果显示关闭，关闭按钮图片名称
@property(nonatomic,strong) NSString *closeImageName;

// 如果显示标题，显示标题内容
@property(nonatomic,strong) UIView *contentChildView;
@property(nonatomic,strong) UILabel *titleLabel;

@property(nonatomic,assign) NSInteger selectIndex;
@property(nonatomic,strong) UIColor *selectColor;

/**
 * 点击选中的技能组回调事件
 * @param block 点击选中的技能组回调事件，当前的技能组对象ZCLibSkillSet
 */
@property (nonatomic, strong)  void(^ItemClickBlock) (id itemModel,NSInteger index);
/**
 *  创建sheetView ，根据数据源
 *  @param  array  数据
 *  @param  column  展示几列
 *  @return SobotSheetView  下面弹出的浮层
 */
 -(SobotSheetView *)initActionSheet:(NSMutableArray *)array withClolumn:(NSInteger)column addHeader:(BOOL)showHeader title:(NSString *) title cancel:(BOOL ) showCancel;


/// 使用childView
/// @param showHeader 显示头部
/// @param title  头部标题
-(SobotSheetView *)initActionSheet:(BOOL)showHeader title:(nonnull NSString *)title;

/// 根据sheetView,显示子view
/// @param childView 要显示的数据
- (SobotSheetView *)initActionSheet:(UIView *__nullable)childView addHeader:(BOOL) showHeader title:(NSString *) title;


// 添加单个标签
-(SobotButton *)addItemView:(id _Nonnull ) model withX:(CGFloat )x withY:(CGFloat) y withW:(CGFloat) w withH:(CGFloat) h;

// 添加子View
-(void)createChildView;
-(void)changeChildFrame;


- (void)itemClick:(SobotButton *) view;

/**
 *  显示技能组页面
 *  @param view 技能组页面添加到指定的view
 */
- (void)showInView:(UIView * __nullable)view;

/**
 *  关闭技能组页面
 *  @param  isClose 当前是否关闭
 */
- (void)tappedCancel:(BOOL) isClose;




/**
 *  直接退出SDK 并关闭技能组弹框
 *  @param closeBlock 直接退出SDK 并关闭技能组弹框的回调事件
 */
- (void)setCloseBlock:(void(^)(void)) closeBlock;

@end

NS_ASSUME_NONNULL_END
