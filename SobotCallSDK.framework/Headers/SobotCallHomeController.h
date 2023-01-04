//
//  SobotCallHomeController.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <SobotCallSDK/SobotCallDefines.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SobotCallHomeControllerDelegate <NSObject>

@optional
-(void)goToLoginPage;

@optional
-(void)setTabHidde:(BOOL)isHidde;
@end

@interface SobotCallHomeController : SobotBaseController

// 登录参数
@property(nonatomic,copy) NSString * email;
@property(nonatomic,copy) NSString * password;
@property(nonatomic,copy) NSString * token;

@property(nonatomic,strong)UIViewController *userVC;// 用户传入的VC
@property(nonatomic,assign)BOOL isAddInTab;// 首页是否嵌入到uitabbarviewcorll
@property(nonatomic,weak) id<SobotCallHomeControllerDelegate> delegate;

// 获取新的token从新登录
-(void)doLogin;

-(void)initLoadData;

//app  登录成功后重新刷新数据
-(void)reloadInitData;

-(void)setV6Flag:(int)callV6Flag;
@end

NS_ASSUME_NONNULL_END
