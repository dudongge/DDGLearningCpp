//
//  main.m
//  04-默认参数
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

void display(int a = 10, int b = 20) {
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
}
void display(int a = 10) {
    cout << "a is " << a << endl;
}
void display() {
    cout << "display() " << endl;
}
int main() {
    //display();
    //display(1);
    display(1,3);
}

