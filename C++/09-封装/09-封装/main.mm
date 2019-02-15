//
//  main.m
//  09-封装
//
//  Created by dudongge on 2019/2/1.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

//class Person {
//public:
//    int m_age;
//    void run() {
//        cout << "run()" << endl;
//    }
//};
//
//int main() {
//    Person person;
//    person.m_age = 10;
//    person.run();
//}

struct Person {
//限制私有属性
private:
    int m_age;
//公开属性，必须写public，因为不写的话，会被上面的private修饰，变成私有属性
public:
    void setAge(int age) {
        this->m_age = age;
    }

    int getAge() {
        return this->m_age;
    }
};


int main() {
    Person person;
    person.setAge(-20);
    cout << person.getAge() << endl;
}

// 在C\C++中，定义在函数外面的就是全局变量
// 全局变量的特点：整个程序运行过程中都存在
//int age;
//Person p;
//
