//
//  main.m
//  10-堆
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

void test() {
    // 申请4个字节的堆空间内存
    int *p = (int*)malloc(4);
    
    /*char *p = (char *)malloc(4);
     *p = 1;
     *(p + 1) = 2;
     
     p[0] = 1;
     p[1] = 2;*/
}

void test2() {
    int *p = new int;
    int *p2 = new int;
    
    delete p;
    delete p2;
}

void test3() {
    /*int *p = (int *)malloc(sizeof(int) * 10);
     p[0] = 10;
     p[1] = 10;
     p[2] = 10;
     p[3] = 10;
     
     free(p);*/
    
    int *p = new int[10];
    
    // delete [] p;
}

void test4() {
    int *p = new int; // 内存泄露
    p = new int;
    
    delete p;
}

void test5() {
    int size = sizeof(int);
    int *p = (int *)malloc(size);
    // memory set
    // 从p开始的4个字节, 每个字节都存放0
    memset(p, 0, size);
    
    cout << *p << endl;
    
    free(p);
}

void test6() {
    // 没有初始化
    int *p1 = new int;
    // 初始化为0
    int *p2 = new int();
    // 初始化为5
    int *p3 = new int(5);
    // 没有初始化
    int *p4 = new int[3];
    // 全部元素初始化为0
    int *p5 = new int[3]();
    // 全部元素初始化为0
    int *p6 = new int[3]{};
    // 首元素初始化为5，其他元素初始化为0
    int *p7 = new int[3]{ 5 };
    
    cout << p7[0] << endl;
    cout << p7[1] << endl;
    cout << p7[2] << endl;
}

struct Person {
    int m_age;
};

// 全局区
Person g_person;

int main() {
    // 栈空间
    Person person;
    
    // 堆空间
    Person *p = new Person();
    p->m_age = 20;
    
    delete p;
    
    /*Person *p2 = (Person *) malloc(sizeof(Person));
     
     free(p2);*/
}

