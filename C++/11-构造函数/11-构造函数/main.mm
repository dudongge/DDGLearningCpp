//
//  main.m
//  11-构造函数
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//


#include <iostream>
using namespace std;

struct Person {
    int m_age;
    //初始化方法，不带参数
    Person() {
        cout << "Person()" << endl;
        // this->m_age = 0;
        //memset函数是将较大的数据结构(比如对象、数组等)内存清零的比较快的方法
        memset(this, 0, sizeof(Person));
    }
    //初始化，带参数
    Person(int age) {
        //此时不能用this.m_age访问，因为this是指针类型
        this->m_age = age;
        cout << "Person(int age)"<< age << endl;
    }
};

// 全局区
Person g_person1; // Person()
Person g_person2(); // 这是一个函数声明，函数名叫g_person2，无参，返回值类型是Person
Person g_person3(10); // Person(int age)

int main() {
    // 栈空间
    Person person1; // Person()
    Person person2(); // 函数声明，函数名叫person2，无参，返回值类型是Person
    Person person3(20);  // Person(int age)
    
    // 堆空间
    Person *p1 = new Person; // Person()
    Person *p2 = new Person(); // Person()
    Person *p3 = new Person(30);  // Person(int age)
}
