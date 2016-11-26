//
//  PGNetAPIClient.h
//
//  Created by piggybear on 16/8/22.
//  Copyright © 2016年 piggybear. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFHTTPSessionManager.h"

@interface PGNetAPIClient : AFHTTPSessionManager

+ (void)baseUrl:(NSString *)baseUrl;
+ (void)policyWithPinningMode:(AFSSLPinningMode)pinningMode;

+ (instancetype)sharedClient;

@end
