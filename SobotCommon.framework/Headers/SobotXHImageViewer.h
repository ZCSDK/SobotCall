//
//  XHImageViewer.h
//  XHImageViewer
//
//  Created by 曾 宪华 on 14-2-17.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507
//  本人QQ群（142557668）. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotXHImageURLDataSource.h"

@class SobotXHImageViewer;

/**
 *  sobotHxWillDismissWithSelectedViewBlock
 */
typedef void (^sobotHxWillDismissWithSelectedViewBlock)(SobotXHImageViewer *imageViewer, UIImageView *selectedView);

/**
 *  sobotHxDidDismissWithSelectedViewBlock
 */
typedef void (^sobotHxDidDismissWithSelectedViewBlock)(SobotXHImageViewer *imageViewer, UIImageView *selectedView);

/**
 *  sobotHxDidChangeToImageViewBlock
 */
typedef void (^sobotHxDidChangeToImageViewBlock)(SobotXHImageViewer *imageViewer, UIImageView *selectedView);

@protocol SobotXHImageViewerDelegate <NSObject>

@optional
- (void)imageViewer:(SobotXHImageViewer *)imageViewer
    willDismissWithSelectedView:(UIImageView *)selectedView;
- (void)imageViewer:(SobotXHImageViewer *)imageViewer
    didDismissWithSelectedView:(UIImageView *)selectedView;
- (void)imageViewer:(SobotXHImageViewer *)imageViewer
    didChangeToImageView:(UIImageView *)selectedView;

- (UIView *)customTopToolBarOfImageViewer:(SobotXHImageViewer *)imageViewer;
- (UIView *)customBottomToolBarOfImageViewer:(SobotXHImageViewer *)imageViewer;
@end

@interface SobotXHImageViewer : UIView

@property (nonatomic, weak) id<SobotXHImageViewerDelegate> delegate;

@property (nonatomic, assign) CGFloat backgroundScale;

@property (nonatomic, assign) BOOL disableTouchDismiss;

- (UIImage *)currentImage;

- (void)showWithImageViews:(NSArray *)views
              selectedView:(UIImageView *)selectedView;

- (void)tappedScrollView:(UITapGestureRecognizer *)sender;

- (id)initWithImageViewersobotHxWillDismissWithSelectedViewBlock:(sobotHxWillDismissWithSelectedViewBlock)sobotHxWillDismissWithSelectedViewBlock
                          sobotHxDidDismissWithSelectedViewBlock:(sobotHxDidDismissWithSelectedViewBlock)sobotHxDidDismissWithSelectedViewBlock
                                sobotHxDidChangeToImageViewBlock:(sobotHxDidChangeToImageViewBlock)sobotHxDidChangeToImageViewBlock;

- (void)dismissWithAnimate;
- (void)dismissWithAnimate:(CGFloat) animate;

@end
