//
//  main.cpp
//  TwoDimensionalArray
//
//  Created by XueFeng Chen on 2016/12/5.
//  Copyright © 2016年 XueFeng Chen. All rights reserved.
//

#include <iostream>
#include <vector>
#include "TwoDimensionalArraySearchClass.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> array = {
        { 1,  2,  3,  4,  5,  6,  7},
        {11, 22, 33, 44, 55, 66, 77},
        {12, 23, 34, 45, 56, 67, 78},
        {13, 24, 35, 46, 57, 68, 79},
        {14, 25, 36, 47, 58, 69, 80},
        {15, 26, 37, 48, 59, 70, 81},
        {16, 27, 38, 49, 60, 71, 82},
        {17, 28, 39, 50, 61, 72, 83}
    };
    
    int target = 60;
    TwoDimensionalArraySearchClass twoDimensionalArraySearch;
    if (twoDimensionalArraySearch.Find(target, array)) {
        cout << "target was Found!\n";
    } else {
        cout << "target wasn't Found!\n";
    }
    
    return 0;
}
