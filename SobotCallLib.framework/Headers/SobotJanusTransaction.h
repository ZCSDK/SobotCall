//
//  SobotJanusTransaction.h
//  JanusiOS
//
//  Created by hello on 2019/11/27.
//  Copyright © 2019 Codeboy. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^TransactionSuccess)(NSDictionary *data);
typedef void(^TransactionError)(NSDictionary *data);

// 用于客户端与Janus之间事物交互处理的类
@interface SobotJanusTransaction : NSObject

@property (nonatomic, strong) NSString *tid;

@property (nonatomic, copy) TransactionSuccess success;
@property (nonatomic, copy) TransactionError error;



@end

NS_ASSUME_NONNULL_END
