//
//  SobotPickView.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/4/12.
//

#import <UIKit/UIKit.h>

@class SobotPickView;
@protocol SobotPickViewDelegate <NSObject>

@optional
- (void)pickView:(SobotPickView *)pickView  title:(NSString *)title index:(NSUInteger)index;

@end

@interface SobotPickView : UIView<UIPickerViewDelegate,UIPickerViewDataSource>

@property (nonatomic,strong)UIPickerView *pickView;

@property (nonatomic,copy) NSString *title;

@property (nonatomic,strong) NSArray *listArray;

@property (nonatomic,assign) id<SobotPickViewDelegate>delegate;




- (void)pickViewShow;
- (void)pickViewDismiss;

@end
