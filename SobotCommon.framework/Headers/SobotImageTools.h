//
//  SobotImageTools.h
//  SobotKit
//
//  Created by zhangxy on 15/11/23.
//  Copyright © 2015年 zhichi. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


/**
 *  ZC 图片处理工具类
 */
@interface SobotImageTools : NSObject

/**
 *  把颜色值转换为color
 *
 *  @param color  颜色
 *
 *  @return image 图片
 */
+ (UIImage *) sobotImageWithColor:(UIColor *)color;

/**
 *  等比缩放图片
 *
 *  @param size  缩放尺寸大小
 *  @param image 将要缩放的图片
 *
 *  @return image 缩放后的图片
 */
+(UIImage*)sobotScaleToSize:(CGSize)size with:(UIImage *) image;


// #未使用#
+ (UIImage *)sobotAnimatedGIFNamed:(NSString *)name;

+ (UIImage *)sobotAnimatedGIFWithData:(NSData *)data;

+ (UIImage *)sobotImageWithData:(NSData *)data;

// #未使用#
+ (UIImage *)sobotAnimatedImageByScalingAndCroppingToSize:(CGSize)size with:(UIImage *) image;

/**
 *  获取data的图片了下
 *
 *  @param data 图片数据
 *
 *  @return 图片类型(image/jpeg、image/png、image/gif)
 */
+ (NSString *)sobotContentTypeForImageData:(NSData *)data;



/**
 *  编码图片
 *
 *  @param image  要编码的image
 *
 *  @return 编码后的图片
 */
+(UIImage *)sobotDecode:(UIImage *)image;

+(UIImage *)sobotFastImageWithData:(NSData *)data;

+(UIImage *)sobotFastImageWithContentsOfFile:(NSString *)path;


//处理渐变色相关
#pragma mark - 获取渐变后的颜色
+(UIColor*)gradientColorWithSize:(CGSize)size colorArr:(NSMutableArray*)colorArr;
+(UIColor*)gradientColorWithSize:(CGSize)size colorArr:(NSMutableArray*)colorArr startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;
#pragma mark - 颜色字符串转换成uicolor
+(UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;

@end
