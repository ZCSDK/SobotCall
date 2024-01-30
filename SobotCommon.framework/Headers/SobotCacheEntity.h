//
//  SobotCacheEntity.h
//  SobotCommon
//
//  Created by zhangxy on 2020/8/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SobotCacheEntity : NSObject

-(id)initWithBundleName:(NSString *) bundleName;

// 资源bundle名称，比如SobotOnline.bundle则 bundleName = SobotOnline
@property(nonatomic,strong) NSString *bundleName;

// 语言文件在bundle中的路径文件夹，例如Localizable
@property(nonatomic,strong) NSString *languagePathInBundle;

// 资源bundle中，语言文件名称
@property(nonatomic,strong) NSString *languageTableName;

// 资源bundle中，语言文件名称
@property(nonatomic,strong) NSString *colorTableName;


// 无法识别时的默认语言
@property(nonatomic,strong) NSString *defaultlanguage;

// 指定语言
@property(nonatomic,strong) NSString *absoluetelanguage;

@end
