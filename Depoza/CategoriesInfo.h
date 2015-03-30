//
//  CategoriesData.h
//  Depoza
//
//  Created by Ivan Magda on 26.02.15.
//  Copyright (c) 2015 Ivan Magda. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CategoriesInfo : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, assign) NSNumber *idValue;
@property (nonatomic, strong) NSNumber *amount;

- (instancetype)initWithTitle:(NSString *)title iconName:(NSString *)iconName idValue:(NSNumber *)idValue andAmount:(NSNumber *)amount;

@end