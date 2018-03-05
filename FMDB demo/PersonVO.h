//
//  PersonVO.h
//  FMDB demo
//
//  Created by 未思语 on 28/02/2018.
//  Copyright © 2018 wsy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PersonVO : NSObject
@property (nonatomic, assign) int ID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, assign) int score;

@end
