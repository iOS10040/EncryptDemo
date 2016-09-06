//
//  ViewController.m
//  EncryptDemo
//
//  Created by ru dian on 16/8/18.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "ViewController.h"
#import "DESEncrypt.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //测试的代码
    NSString *text = @"爱哈水库大时代";
    NSString *encryptedText = [DESEncrypt encryptUseDES:text key:@"12345678asdcfreq"];
    NSLog(@"明文：%@",text);
    NSLog(@"秘钥：%@",@"12345678asdcfreq");
    NSLog(@"密文：%@",encryptedText);
    
    NSString * decryptedText=[DESEncrypt decryptUseDES:encryptedText key:@"12345678asdcfreq"];
    NSLog(@"解密后：%@",decryptedText);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
