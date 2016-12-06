//
//  TwoDimensionalArraySearchClass.cpp
//  TwoDimensionalArray
//
//  Created by XueFeng Chen on 2016/12/5.
//  Copyright © 2016年 XueFeng Chen. All rights reserved.
//

#include "TwoDimensionalArraySearchClass.hpp"

TwoDimensionalArraySearchClass::TwoDimensionalArraySearchClass() {
    
}

TwoDimensionalArraySearchClass::~TwoDimensionalArraySearchClass() {
    
}

bool TwoDimensionalArraySearchClass::Find(int target, vector<vector<int> > array) {
    unsigned long row = array.size();
    if (row == 0) {
        return false;
    }
    
    unsigned long col = array[0].size();
    if (col == 0) {
        return false;
    }
    
    if ((target < array[0][0]) ||
        (target > array[row - 1][col - 1])) {
        return false;
    }
    
    long rowPos = 0;
    long colPos = col - 1;
    
    while ((rowPos <= (row - 1)) &&
           (colPos >= 0)) {
        if (target == array[rowPos][colPos]) {
            return true;
        } else if (target > array[rowPos][colPos]) {
            rowPos++;
        } else {
            colPos--;
        }
    }
    
    return false;    
}
