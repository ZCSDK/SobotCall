//
//  SobotURLSessionDelegate.h
//  MacOSTest
//
//  Created by wl on 2021/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class SobotRequest;
typedef void(^SobotURLSessionProgressBlock)(NSProgress *progress);
typedef void(^SobotURLSessionDownloadCompletion)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);
@interface SobotURLSessionDelegate : NSObject <NSURLSessionDelegate ,NSURLSessionDataDelegate ,NSURLSessionTaskDelegate>

@property (nonatomic ,weak) SobotRequest *manager;

@property (nonatomic ,copy) SobotURLSessionProgressBlock progressBlock;

@property (nonatomic ,copy) SobotURLSessionDownloadCompletion completionBlock;

@end

NS_ASSUME_NONNULL_END
