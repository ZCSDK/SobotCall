//
//  ZCCustomAlertView.h
//  SobotApp
//
//  Created by lizhihui on 15/11/7.
//  Copyright © 2015年 com.sobot.chat. All rights reserved.
//




#import <UIKit/UIKit.h>
@class SobotAlertView;
@protocol SobotAlertViewDelegate <NSObject>

- (void)customAlertView:( SobotAlertView *_Nullable )customAlertView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end
@interface SobotAlertView : UIView

- (nullable instancetype)initWithTitle:(nullable NSString*)title message:(nullable NSString*) message  cancelButtonTitle:(nullable NSString*) cancelButtonTitle otherButtonTitles:(nullable NSString*)otherTitles,... NS_REQUIRES_NIL_TERMINATION;
/**
 *  显示弹出框
 */
-(void)showWithCompletion:(void ( ^ _Nullable )(  SobotAlertView * _Nullable alertView ,NSInteger selectIndex))completeBlock;

@property (nullable,nonatomic,weak)id<SobotAlertViewDelegate>delegate;


@property (nonatomic,strong) id objTag;
@property (nonatomic,assign) BOOL isAutoClose;
@property (nullable,nonatomic,strong) UIColor *bgColor;
@property (nullable,nonatomic,strong) UIColor *contentColor;
@property (nullable,nonatomic,strong) UIColor *messageColor;
@property (nullable,nonatomic,strong) UIColor *btnColor;
@property (nullable,nonatomic,strong) UIColor *btnCancelColor;
@property (nullable,nonatomic,strong) UIColor *titleColor;
@property (nonatomic,strong)UILabel * messageLabel;

/**
 *  代理时用
 */
- (void)show;
-(void)dismissView;
@end
