//
//  SobotUserCenterDefines.h
//  SobotUserCenterSDK
//
//  Created by zhangxy on 2022/8/19.
//


#import <SobotCommon/SobotCommon.h>
#import <SobotUserCenter/SobotUserCenterCache.h>
#import <SobotUserCenter/SobotUserCenterService.h>

// 国际化
#define SobotUCenterLocalString(key) [[SobotUserCenterCache shareSobotUserCenterCache] localOrderString:key]
#define SobotUCenterCommonLocalString(key) [[SobotUserCenterCache shareSobotUserCenterCache] localCommonString:key]

//static SobotTypeColor const SobotColorBgLineOF5  = @"SobotColorBgLineOF5";// 新增默认背景"#F5F5F5";


// 资源
#define SobotUCenterGetImage(imageName) [SobotUserCenterCache getOrderSysImage:imageName]
// 颜色
#define UIColorFromUCenterModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey  bundleName:UCenterBundelName]
#define UIColorFromUCenterModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a bundleName:UCenterBundelName]

