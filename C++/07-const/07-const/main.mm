//
//  main.m
//  07-const
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {

    int age = 10;
    //不能通过指针修改所指向的内容
    int const *pAge1 = &age;
    //不能修改指针的指向，但是可以通过指针修改所指向的内容
    int * const pAge2 = &age;
    cout << pAge1 << endl;
    cout << pAge2 << endl;
    
    // *p0是常量，p0不是常量
    const int *p0 = &age;
    // *p1是常量，p1不是常量
    int const *p1 = &age;
    // p2是常量，*p2不是常量
    int * const p2 = &age;
    // *p3是常量，p3是常量
    const int * const p3 = &age;
    // *p4是常量，p4是常量
    int const * const p4 = &age;

}

