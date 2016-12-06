//
//  main.m
//  TwoDimensionalArrayOC
//
//  Created by XueFeng Chen on 2016/12/6.
//  Copyright © 2016年 XueFeng Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TwoDimensionalArraySearch.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSArray *twoDimensionalArray = @[
                                         @[ @1,  @2,  @3,  @4,  @5],
                                         @[@11, @12, @13, @14, @15],
                                         @[@21, @22, @23, @24, @25],
                                         @[@31, @32, @33, @34, @35],
                                         @[@41, @42, @43, @44, @45],
                                         @[@51, @52, @53, @54, @55],
                                         @[@61, @62, @63, @64, @65],
                                         @[@71, @72, @73, @74, @75],
                                         ];
        
        NSInteger target = 5;
        
        TwoDimensionalArraySearch *arraySearch = [[TwoDimensionalArraySearch alloc] init];
        if ([arraySearch findTarget:target inTwoDimensionalArray:twoDimensionalArray]) {
            NSLog(@"target was found!");
        } else {
            NSLog(@"target wasn't found!");
        }
        
    }
    return 0;
}
