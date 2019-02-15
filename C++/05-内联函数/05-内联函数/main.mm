//
//  main.m
//  05-内联函数
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

//声明内联函数
inline int sum(int a, int b);

int main() {
    
    cout << "sum的和是："<< sum(10, 20) << endl;
}

//内联函数的实现
inline int sum(int a, int b) {
    return a + b;
}
