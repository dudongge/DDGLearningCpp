//
//  main.m
//  12-成员变量的初始化
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person {
    int m_age;
//    Person() {
//     this->m_age = 3;
//    }
};

// 全局区（成员变量初始化为0）
Person g_person;

int main() {
    // 栈空间（成员变量没有初始化）
    Person person;
    // 堆空间
    Person *p1 = new Person; // 成员变量没有初始化
    Person *p2 = new Person(); // 成员变量有初始化
    
    cout << "g_person " << g_person.m_age << endl;
    cout << "p1 " << p1->m_age << endl;
    cout << "p2 " << p2->m_age << endl;
}

