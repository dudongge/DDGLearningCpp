//
//  main.cpp
//  18-初始化列表
//
//  Created by dudongge on 2019/2/12.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

int myAge() {
    cout << "myAge()" << endl;
    return 30;
}

int myHeight() {
    cout << "myHeight()" << endl;
    return 180;
}

//struct Person {
//    int m_age;
//    int m_height;
//
//    Person() {
//        this->m_age = 10;     //初始化赋值，只能用this获得属性，this类似于OC中的self
//        this->m_height = 20;
//    }
//    void display() {
//        cout << "m_age is " << this->m_age << endl;
//        cout << "m_height is " << this->m_height << endl;
//    }
//};
//struct Person {
//    int m_age;
//    int m_height;
//    // 初始化列表 :m_age(age), m_height(height)
//    //用一个冒号隔开，前面是需要传入的参数，后面是要赋值的属性
//    Person(int age, int height) :m_height(height), m_age(age)   {
//     //对属性进行一些加工操作
//    }
//    void display() {
//        cout << "m_age is " << this->m_age << endl;
//        cout << "m_height is " << this->m_height << endl;
//    }
//};

//struct Person {
//    int m_age;
//    int m_height;
//    // 初始化列表 :m_age(age), m_height(height)
//    //用一个冒号隔开，前面是需要传入的参数，后面是要赋值的属性
//    Person():m_height(myHeight()), m_age(myAge()) {
//
//    }
//    void display() {
//        cout << "m_age is " << this->m_age << endl;
//        cout << "m_height is " << this->m_height << endl;
//    }
//};


//struct Person {
//    int m_age;
//    int m_height;
//
//    Person(int age, int height) {
//     this->m_age = age;
//     this->m_height = height;
//     }
//
//    void display() {
//        cout << "m_age is " << this->m_age << endl;
//        cout << "m_height is " << this->m_height << endl;
//    }
//};

//struct Person {
//    int m_age;
//    int m_height;
//
//    Person() :Person(0, 0) { }
//    Person(int age, int height) :m_age(age), m_height(height) { }
//
//    void display() {
//        cout << "m_age is " << this->m_age << endl;
//        cout << "m_height is " << this->m_height << endl;
//    }
//};

struct Person {
    int m_age;
    int m_height;
    // 默认参数只能写在函数的声明中
    Person(int age = 0, int height = 0);
    void display() {
        cout << "m_age is " << this->m_age << endl;
        cout << "m_height is " << this->m_height << endl;
    }
};

// 构造函数的初始化列表只能写在实现中
Person::Person(int age, int height) :m_age(age), m_height(height) {
    
}
int main() {
//    Person person;
//    person.display();
    
     //person.Person();
//    Person person2(15, 25);
//    person2.display();
    
    
    /*Person person1;
     person1.display();
     
     cout << "-----------------" << endl;*/
    Person person;
    person.display();
    Person person2(10);
    person2.display();
    Person person3(20, 180);
    person3.display();
    
    
    getchar();
    return 0;
}

