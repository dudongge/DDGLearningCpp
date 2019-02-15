//
//  main.m
//  03-extern-C
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
#import "sum.hpp"
using namespace std;
// C语言库
extern "C" void func() {
    std::cout << "func()" << std::endl;
}

int main() {
    func();
    cout << "sum的和是：" << sum(2, 4) << endl;
    cout << "minus的结果是：" << testMinus(8, 4) << endl;
}



