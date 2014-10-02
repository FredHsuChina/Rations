//
//  Player.h
//  Rations
//
//  Created by 许文锋 on 14-10-2.
//  Copyright (c) 2014年 fred. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject
@property (copy,nonatomic) NSString *name;
@property (copy,nonatomic) NSString *game;
@property (assign,nonatomic) int rating;
@end
