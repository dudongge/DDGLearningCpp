//
//  main.m
//  08-类
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;
/**
 private,public,protected方法的访问范围.（public继承下）
 private: 只能由该类中的函数、其友元函数访问,不能被任何其他访问，该类的对象也不能访问.
 protected: 可以被该类中的函数、子类的函数、以及其友元函数访问,但不能被该类的对象访问
 public: 可以被该类中的函数、子类的函数、其友元函数访问,也可以由该类的对象访问
 注：友元函数包括两种：设为友元的全局函数，设为友元类中的成员函数
 */
//定义一个Student类
class Student {
    //访问权限，类的访问权限默认只能在类的内部。
public:
    //定义属性
    int no;
    //定义无返回值的方法
    void study() {
        cout << "study() - no is " << no << endl;
    }
};

//定义一个Worker结构体
struct Worker {
    //定义属性
    int age;
    //定义无返回值的方法
    void work() {
        cout << "work() - age is " << age << endl;
    }
};

int main() {
    //初始化--是不是很简单，因为这是最简单的，没有构造器的初始化方法
    Student student;
    //属性访问与赋值
    student.no = 100;
    student.study();
    //当然你也可以用指针这样访问
    Student *pStudent = &student;
    pStudent->no = 150;
    pStudent->study();
    
    Worker worker;
    worker.age = 20;//可以直接访问，默认修饰的属性是public
    worker.work();
}
