//
//  main.m
//  02-函数重载
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//
/*
 C语言不支持运算符重载
 java中确实没有云运算符重载，唯一例外是String里面的=和+ String类的"=","+","+="，看似运算符重载，实际不是，只是在java编译器里做了一点手脚
 OC语言不支持运算符重载
 
 swift 支持运算符重载
 kotlin 支持运算符重载
 C++  支持运算符重载 😏
 */


#include <iostream>
using namespace std;

// hehehe_v
void hehehe() {
    cout << "hehehe() " << endl;
}

// hehehe_i
void hehehe(int a) {
    cout << "hehehe(int a) " << a << endl;
}

// hehehe_l
void hehehe(long a) {
    cout << "hehehe(long a) " << a << endl;
}

// hehehe_d
void hehehe(double a) {
    cout << "hehehe(double a) " << a << endl;
}

// main
int main() {
    hehehe();
    hehehe(10);
    hehehe(10l);
    hehehe(10.1);
}

