//
//  SobotImagePickerTools.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/11.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SobotImagePickerFileType) {
    SobotImagePickerFileTypeImage = 0,
    SobotImagePickerFileTypeVideo = 1
};

typedef NS_ENUM(NSInteger,SobotImagePickerType) {
    SobotImagePickerPicture = 0, // 相册
    SobotImagePickerCamera  = 1,  // 相机
    SobotImagePickerVideo   = 2  //从相册选择视频
};


/**
 *  DidFinishPickingMediaBlock
 */
typedef void(^DidFinishPickingMediaBlock)(NSString  * _Nullable filePath , SobotImagePickerFileType type, NSDictionary * _Nullable duration);


NS_ASSUME_NONNULL_BEGIN

@interface SobotImagePickerTools : NSObject

/** 系统相册相机图片 */
@property (nonatomic,strong) UIImagePickerController * _Nullable zc_imagepicker;

+(SobotImagePickerTools *) shareImagePickerTools;


/**
 *  根据类型获取图片
 *  @param type  2，来源照相机，1来源相册
 *  @param by_controller  启动页面的vc
 *  @param finshBlock    处理结果
 *
 */
-(void)getPhotoByType:(SobotImagePickerType) type onlyPhoto:(BOOL) onlyPicture  byUIImagePickerController:(UIViewController *)by_controller block:(nonnull DidFinishPickingMediaBlock)finshBlock;
-(void)getPhotoByType:(SobotImagePickerType) type onlyPhoto:(BOOL) onlyPicture  byUIImagePickerController:(UIViewController *)by_controller start:(void(^_Nullable)(UIImagePickerController *vc)) pickerBlock block:(nonnull DidFinishPickingMediaBlock)finshBlock;

@end

NS_ASSUME_NONNULL_END
