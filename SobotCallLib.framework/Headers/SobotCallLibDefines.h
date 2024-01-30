//
//  SobotCallDefines.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/8/18.
//
#import <SobotCommon/SobotCommon.h>
#import <SobotCallLib/SobotCallCache.h>


// 国际化
#define SobotCallLocalString(key) [[SobotCallCache shareSobotCallCache] localCallString:key]

// 资源
#define SobotCallGetImage(imageName) [SobotCallCache getCallSysImage:imageName]
// 颜色
#define UIColorFromCallModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey  bundleName:CallBundelName]
#define UIColorFromCallModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a bundleName:CallBundelName]


static SobotTypeColor const SobotColorCallBgLineF5  = @"SobotColorBgLineF5";// 线条颜色"#F5F5F5";分割线
static SobotTypeColor const SobotColorCallBgLineF0  = @"SobotColorBgLineF0";// 线条颜色"#F0F0F0";分割线

// 通话结束通知
#define SobotCallEndEventReleased @"CallEndEventReleased"

// 编辑任务信息完成
#define SobotCallEditTaskInfoSucess @"CallEditTaskInfoSucess"

// 编辑任务总结完成
#define SobotCallEditTaskSummarySucess @"CallEditTaskSummarySucess"

