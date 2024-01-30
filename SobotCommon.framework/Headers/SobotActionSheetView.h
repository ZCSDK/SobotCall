//
//  SobotActionSheetView.h
//  wash
//
//  Created by lizhihui on 15/10/21.
//
//

#import <UIKit/UIKit.h>

@class SobotActionSheetView;

@protocol SobotActionSheetViewDelegate <NSObject>

@optional

/**
 *  点击按钮
 */
- (void)actionSheet:(SobotActionSheetView *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;

@end

@interface SobotActionSheetView : UIView

/**
 *  代理
 */
@property (nonatomic, weak  ) id <SobotActionSheetViewDelegate> delegate;

/**
 *  必须在selectIndex之前设置
 */
@property (nonatomic, strong) UIColor                    *selectColor;
@property (nonatomic, assign) int                        selectIndex;
@property (nonatomic, strong) UIColor                    *titleColor;

/**
 *  创建对象方法
 */
- (instancetype)initWithDelegate:(id<SobotActionSheetViewDelegate>)delegate title:(NSString *)titleMessage CancelTitle:(NSString *)cancelTitle OtherTitles:(NSString*)otherTitles,... NS_REQUIRES_NIL_TERMINATION;

- (void)show;

@end
