//
//  Base64.h
//  EncryptDemo
//
//  Created by ru dian on 16/8/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Base64 : NSObject

+(NSString *)encode:(NSData *)data;
+(NSData *)decode:(NSString *)dataString;

@end
