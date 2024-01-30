//
//  SobotView.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/7.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotView : UIView

@property(nonatomic,strong) NSString *borderColorName;
@property(nonatomic,strong) NSString *bundleName;


@property(nonatomic,strong) id objTag;

@end

NS_ASSUME_NONNULL_END
