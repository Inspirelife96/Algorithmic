//
//  TwoDimensionalArraySearchClass.hpp
//  TwoDimensionalArray
//
//  Created by XueFeng Chen on 2016/12/5.
//  Copyright © 2016年 XueFeng Chen. All rights reserved.
//

#ifndef TwoDimensionalArraySearchClass_hpp
#define TwoDimensionalArraySearchClass_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class TwoDimensionalArraySearchClass {
public:
    TwoDimensionalArraySearchClass();
    ~TwoDimensionalArraySearchClass();
    bool Find(int target, vector<vector<int> > array);
};

#endif /* TwoDimensionalArraySearchClass_hpp */
