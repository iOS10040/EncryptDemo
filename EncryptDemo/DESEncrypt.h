//
//  DESEncrypt.h
//  EncryptDemo
//
//  Created by ru dian on 16/8/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DESEncrypt : NSObject

/**
 *  加密方法
 *
 *  @param plainText 需要加密的字符串
 *  @param key       秘钥
 *
 *  @return 返回加密后的字符串
 */
+(NSString *) encryptUseDES:(NSString *)plainText key:(NSString *)key;

/**
 *  解密方法
 *
 *  @param cipherText 需要解密的字符串
 *  @param key        秘钥
 *
 *  @return 返回解密后的字符串
 */
+(NSString *) decryptUseDES:(NSString *)cipherText key:(NSString *)key;

@end
