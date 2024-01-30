//
//  ZCEmojiBoardView.h
//  SobotApp
//
//  Created by 张新耀 on 15/9/15.
//  Copyright (c) 2015年 com.sobot.chat. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SobotEmojiBoardActionType) {
    SobotEmojiActionDel=1,
    SobotEmojiActionSend=2,
};

@protocol SobotEmojiBoardDelegate <NSObject>

@optional

-(void)onEmojiItemClick:(NSString *) faceTag faceName:(NSString *) name index:(NSInteger)itemId;

-(void)emojiAction:(SobotEmojiBoardActionType) action;

@end


@interface SobotEmojiBoardView : UIView<UIScrollViewDelegate>
{
    UIScrollView *faceView;
    
    UIPageControl *facePageControl;
    
    NSArray *_faceMap;
}


@property (nonatomic, assign) id<SobotEmojiBoardDelegate> delegate;

-(id)initWithBoardHeight:(CGFloat ) height pH:(CGFloat) ph pW:(CGFloat) pw;


-(void) refreshItemsView;

@end
