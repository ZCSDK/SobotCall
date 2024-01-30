//
//  SobotVoiceTools.h
//  SobotOnline
//
//  Created by zhangxy on 2020/9/2.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,SobotAudioSessionCategory) {
    SobotAudioSessionCategoryPlayback = 0, // 扬声器
    SobotAudioSessionCategoryRecord = 1,   // 听筒
};


typedef NS_ENUM(NSInteger,SobotVoicePlayState) {
    SobotVoicePlayStart = 0, // 扬声器
    SobotVoicePlayPause = 1, // 扬声器
    SobotVoicePlayEnd = 2, // 扬声器
    SobotVoicePlayFailed = 3, // 扬声器
    SobotVoicePlaying= 4, // 扬声器
};

@interface SobotVoiceTools : NSObject

@property (nonatomic,assign)CGFloat speed;
@property (nonatomic,assign)CGFloat progress;

/**
 *  此方法不是单例，注意
 *  @return SobotVoiceTools创建的对象
 */
+(SobotVoiceTools *)shareSobotVoiceTools;


// 关闭当前播放的声音
+(void)stopVoice;

// 1 总结分类
@property (nonatomic, strong)  void(^playStatusBlock) (SobotVoicePlayState code,CGFloat currentTime,CGFloat duration);

/**
 *  播放声音
 *
 *  @param fileUrl     当前点击的model
 *  @param imageView 动画的view
 */
-(void)startWithModel:(NSString *)fileUrl view:(UIImageView * _Nullable)imageView category:(SobotAudioSessionCategory)  category;


- (void)sotpPlayVoide;

- (void)pausePlayVoide;
- (void)startPlayVoide;
- (void)changePlaySpeed:(CGFloat) speed;
- (void)changePlayProgress:(CGFloat) progress;


@end

NS_ASSUME_NONNULL_END
