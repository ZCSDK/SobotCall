//
//  SobotDatePickView.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/4/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SobotDatePickView;

@protocol SobotDatePickViewDelegate <NSObject>

@optional
-(void)toobarDonBtnHaveClick:(SobotDatePickView *)pickView resultString:(NSString *)resultString firstIndex:(NSInteger) index;

@end

@interface SobotDatePickView : UIView

@property (nonatomic,strong) UIButton * rightBtn;

@property (nonatomic,copy) NSString *serverLocale;

@property (nonatomic,strong) NSTimeZone *timeZone;

@property(nonatomic,assign) id<SobotDatePickViewDelegate> delegate;
// action:0，取消；1；搜索，2、筛选
@property (nonatomic,strong) void(^onCommitListner)(NSString *resultText,NSInteger index);
/**
 *  通过plistName添加一个pickView
 *
 *  @param plistName          plist文件的名字

 *  @param isHaveNavControler 是否在NavControler之内
 *
 *  @return 带有toolbar的pickview
 */
-(instancetype)initPickviewWithPlistName:(NSString *)plistName isHaveNavControler:(BOOL)isHaveNavControler;
/**
 *  通过plistName添加一个pickView
 *
 *  @param array              需要显示的数组
 *  @param isHaveNavControler 是否在NavControler之内
 *
 *  @return 带有toolbar的pickview
 */
-(instancetype)initPickviewWithArray:(NSArray *)array isHaveNavControler:(BOOL)isHaveNavControler;

/**
 *  通过时间创建一个DatePicker
 *
 *  @param date               默认选中时间
 *  @param isHaveNavControler是否在NavControler之内
 *
 *  @return 带有toolbar的datePicker
 */
-(instancetype)initDatePickWithDate:(NSDate *)defaulDate datePickerMode:(UIDatePickerMode)datePickerMode isHaveNavControler:(BOOL)isHaveNavControler;


/// 通过时间和语言创建一个DatePicker
/// @param defaulDate defaulDate description
/// @param datePickerMode datePickerMode description
/// @param isHaveNavControler isHaveNavControler description
/// @param serverLocale serverLocale description
-(instancetype)initDatePickWithDate:(NSDate *)defaulDate datePickerMode:(UIDatePickerMode)datePickerMode isHaveNavControler:(BOOL)isHaveNavControler serverLocale:(NSString *)serverLocale;


-(instancetype)initDatePickWithDate:(NSDate *)defaulDate datePickerMode:(UIDatePickerMode)datePickerMode isHaveNavControler:(BOOL)isHaveNavControler serverLocale:(NSString *)serverLocale timeZone:(NSTimeZone *)timeZone;
/**
 *   移除本控件
 */
-(void)remove;
/**
 *  显示本控件
 */
-(void)show;
/**
 *  设置PickView的颜色
 */
-(void)setPickViewColer:(UIColor *)color;
/**
 *  设置toobar的文字颜色
 */
-(void)setTintColor:(UIColor *)color;
/**
 *  设置toobar的背景颜色
 */
-(void)setToolbarTintColor:(UIColor *)color;



-(void)setPickViewTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
