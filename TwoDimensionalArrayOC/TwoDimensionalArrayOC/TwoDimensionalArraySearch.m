//
//  TwoDimensionalArraySearch.m
//  TwoDimensionalArrayOC
//
//  Created by XueFeng Chen on 2016/12/6.
//  Copyright © 2016年 XueFeng Chen. All rights reserved.
//

#import "TwoDimensionalArraySearch.h"

@implementation TwoDimensionalArraySearch

- (BOOL)findTarget:(NSInteger)target inTwoDimensionalArray:(NSArray *)array {
    NSInteger row = [array count];
    if (row == 0) {
        return NO;
    }
    
    NSInteger col = [array[0] count];
    if (col == 0) {
        return NO;
    }
    
    if ((target < [array[0][0] integerValue]) ||
        (target > [array[row - 1][col - 1] integerValue])) {
        return NO;
    }
    
    NSInteger rowPos = 0;
    NSInteger colPos = col - 1;
    
    while ((rowPos <= (row - 1)) &&
           (colPos >= 0)) {
        if (target == [array[rowPos][colPos] integerValue]) {
            return YES;
        } else if (target > [array[rowPos][colPos] integerValue]) {
            rowPos++;
        } else {
            colPos--;
        }
    }
    
    return NO;
}

@end
