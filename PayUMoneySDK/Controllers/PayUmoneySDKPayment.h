//
//  PayUmoneySDKPayment.h
//  PayUMoneySDK
//
//  Created by Honey Lakhani on 7/11/16.
//  Copyright © 2016 Kuldeep Saini. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PayuMoneySDKLoginService.h"
#import "PayUConfigBO.h"
@interface PayUmoneySDKPayment : NSObject<LoginServiceDelegate>

@property(nonatomic,weak) UIViewController *callBackController;

-(void)startSDK : (PayUConfigBO *)config withCallBack:(id)delegate;

@end
