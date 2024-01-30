//
//  SobotCallCountryCodeEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2023/7/14.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallCountryCodeEntity : SobotBaseEntity
@property (nonatomic,strong) NSString *countryName;
@property (nonatomic,strong) NSString *countryCode;
@property (nonatomic,strong) NSString *countryNumber;
@property (nonatomic,assign) BOOL isSel;// 是否选中

@property (nonatomic,strong) NSString *callingCode;
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSString *codeId;
@property (nonatomic,strong) NSString *name;
@property (nonatomic,strong) NSString *region;
@property (nonatomic,strong) NSString *url;

//callingCode = 212;
//code = MA;
//id = 99;
//name = "\U6469\U6d1b\U54e5";
//region = EMEA;
//url = "";

@end

NS_ASSUME_NONNULL_END
