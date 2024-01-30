//
//  SobotEmojiLabel.h
//  SobotEmojiLabel
//
//  Created by molon on 5/19/14.
//  Copyright (c) 2014 molon. All rights reserved.
//

#import "SobotAttributedLabel.h"

/**
 *  SobotEmojiLabelLinkType
 */
typedef NS_OPTIONS(NSUInteger, SobotEmojiLabelLinkType) {
    /** url type */
    SobotEmojiLabelLinkTypeURL = 0,
    /** Email type */
    SobotEmojiLabelLinkTypeEmail,
    /** PhoneNumber Type */
    SobotEmojiLabelLinkTypePhoneNumber,
    /** At Type */
    SobotEmojiLabelLinkTypeAt,
    /** PoundSign Type */
    SobotEmojiLabelLinkTypePoundSign,
};


@class SobotEmojiLabel;
@protocol SobotEmojiLabelDelegate <SobotAttributedLabelDelegate>

@optional
- (void)SobotEmojiLabel:(SobotEmojiLabel*)emojiLabel didSelectLink:(NSString*)link withType:(SobotEmojiLabelLinkType)type;


@end

/**
 * SobotEmojiLabel
 */
@interface SobotEmojiLabel : SobotAttributedLabel

@property (nonatomic, assign) BOOL disableEmoji; //禁用表情
@property (nonatomic, assign) BOOL disableThreeCommon; //禁用电话，邮箱，连接三者

@property (nonatomic, assign) BOOL isNeedAtAndPoundSign; //是否需要话题和@功能，默认为不需要

@property (nonatomic, copy) NSString *customEmojiRegex; //自定义表情正则
@property (nonatomic, copy) NSString *customEmojiPlistName; //xxxxx.plist 格式
@property (nonatomic, copy) NSString *customEmojiBundleName; //自定义表情图片所存储的bundleName xxxx.bundle格式
@property (nonatomic,assign) BOOL isGuideCell;// 是否是多轮会话的• 
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-property-synthesis"
@property (nonatomic, weak) id<SobotEmojiLabelDelegate> delegate; //点击连接的代理方法
#pragma clang diagnostic pop

@property (nonatomic, copy, readonly) id emojiText; //外部能获取text的原始副本



// 创建NSMutableAttributedString 会导致卡顿，在UITableViewCell慎用
- (void) setHTML:(NSString *)html;

- (CGSize)preferredSizeWithMaxWidth:(CGFloat)maxWidth;


-(void)setLinkColor:(UIColor *) color;


+ (NSString *)getNormalStringFilterHTMLString:(NSString *)htmlStr;

-(NSMutableDictionary *) getTextADict:(NSString *) searchText;


@end
