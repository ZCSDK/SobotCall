//
//  SobotCallDefines.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/8/18.
//
#import <SobotCommon/SobotCommon.h>
#import <SobotCallSDK/SobotCallCache.h>

// 国际化
#define SobotCallLocalString(key) [[SobotCallCache shareSobotCallCache] localCallString:key]

// 资源
#define SobotCallGetImage(imageName) [SobotCallCache getCallSysImage:imageName bundleName:CallBundelName]
// 颜色
#define UIColorFromCallModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey  bundleName:CallBundelName]
#define UIColorFromCallModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a bundleName:CallBundelName]

