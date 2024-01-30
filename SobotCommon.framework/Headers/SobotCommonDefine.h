//
//  SobotCommonDefine.h
//  SobotUI
//
//  Created by zhangxy on 2022/3/18.
//

#import <UIKit/UIKit.h>
#import "SobotUITools.h"
#import "SobotFontColor.h"
#import "SobotLayoutTools.h"

#import "SobotUtils.h"
#import "SobotLocaliable.h"
#import "SobotDateTimes.h"
#import "SobotLog.h"
#import "SobotNetwork.h"

//#import <SobotCommon/SobotUtils.h>
//#import <SobotCommon/SobotLocaliable.h>
//#import <SobotCommon/SobotDateTimes.h>
//#import <SobotCommon/SobotLog.h>
//#import <SobotCommon/SobotNetwork.h>

// 正式使用，需要用以代码替换SobotExtenalHeader.h的内容
//#import "SobotUtils.h"
//#import "SobotLocaliable.h"

//#import <SobotUtils_private/SobotUtils.h>
//#import <SobotUtils_private/SobotLocaliable.h>
//// 多语言支持
#define SobotLocalString(key) [[SobotLocaliable shareSobotLocaliable] sobotGetLocalString:key]

// 资源
#define SobotGetImage(imageName) [SobotUITools getSysImageByName:imageName]

#ifndef SobotCommonDefine_h
#define SobotCommonDefine_h


// UTF8 字符串
#define SobotUTF8Data(str) [str dataUsingEncoding:NSUTF8StringEncoding]


// 是否为iOS7或者iOS7以上的版本，如果设备版本<iOS7 返回NO 否则返回YES
#define iOS7  ((floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1)? NO:YES)


// 是否为竖屏
#define Sobot_IsPortrait  ([[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortraitUpsideDown)


// 格式化转换(int转String)
#define SobotIntToString(x) [NSString stringWithFormat:@"%d",x]


// 获取NSUserDefaults对象
#define SobotUserDefaults   [NSUserDefaults standardUserDefaults]


// 获取发送通知对象
#define ZCNotificatCenter   [NSNotificationCenter defaultCenter]

// 设备屏幕尺寸的宽度
#define SysScreenWidth                      [[UIScreen mainScreen] bounds].size.width

// 设备屏幕尺寸的高度
#define SysScreenHeight                     [[UIScreen mainScreen] bounds].size.height


// 屏幕旋转后宽度的尺寸
#define ScreenWidth                         (Sobot_IsPortrait ? MIN(SysScreenWidth,SysScreenHeight) : MAX(SysScreenWidth,SysScreenHeight))

// 屏幕旋转后高度的尺寸
#define ScreenHeight                        (Sobot_IsPortrait ? MAX(SysScreenWidth,SysScreenHeight) : MIN(SysScreenWidth,SysScreenHeight))


// iPhoneX
#define Sobot_iPhoneX  [SobotUITools getIsIphonX]//(((SysScreenWidth == 375.f && SysScreenHeight == 812.f ) ||(SysScreenHeight == 375.f && SysScreenWidth == 812.f ) || (SysScreenHeight == 414.f && SysScreenWidth == 896.f ) || (SysScreenWidth == 414.f && SysScreenHeight == 896.f ))? YES : NO)

// 状态栏的高度
#define StatusBarHeight                     (Sobot_iPhoneX ? [[UIApplication sharedApplication] statusBarFrame].size.height : 20.0)
// 导航栏的高度
#define isLandspace     ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeRight || [UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeLeft)
#define NavLandspaceBarHeight               ([UIApplication sharedApplication].statusBarHidden?32.0:64.0)

//return self.navigationController.navigationBar.frame.size.height+[[UIApplication sharedApplication] statusBarFrame].size.height;
#define NavBarHeight                        (isLandspace ? NavLandspaceBarHeight : (Sobot_iPhoneX ? StatusBarHeight+44.0f : 64.0))



#define XBottomBarHeight                    (Sobot_iPhoneX ? 34.f : 0.0)

#define isiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// View的宽度
#define SobotViewWidth(v)                        v.frame.size.width

// View的高度
#define SobotViewHeight(v)                       v.frame.size.height

// View的X轴坐标
#define SobotViewX(v)                            v.frame.origin.x

// View的Y轴坐标
#define SobotViewY(v)                            v.frame.origin.y

// 用法示例SoobtBlockWeakSelf(weakSelf);
#define SoobtBlockWeakSelf(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#define SobotWeakSelf(var) __weak typeof(var) XYWeak_##var = var;
#define SobotStrogSelf(var) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
__strong typeof(var) var = XYWeak_##var; \
_Pragma("clang diagnostic pop")


#define SobotScreenScale          (ScreenWidth / 375.0f)
#define SobotNumber(num)          (num*SobotScreenScale)

#endif /* SobotCommonDefine_h */
