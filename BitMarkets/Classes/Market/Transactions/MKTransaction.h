//
//  MKTransaction.h
//  BitMarkets
//
//  Created by Steve Dekorte on 5/3/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <BitmessageKit/BitMessageKit.h>
#import "MKMessages.h"
#import "MKGroup.h"
#import "MKPost.h"

@interface MKTransaction : MKGroup

@property (strong, nonatomic) MKPost *mkPost;
@property (strong, nonatomic) MKMessages *messages;

@end