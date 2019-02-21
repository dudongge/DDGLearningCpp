//
//  main.cpp
//  25-static关键字
//
//  Created by dudongge on 2019/2/21.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

//class Person {
////默认是privat修饰
//public:
//    static int ms_count;
//};
//
//class Student : public Person {
//    static int getCount() {
//        return Person::ms_count;
//    }
//};
////初始化类静态变量
//int Person::ms_count = 0;
////全局静态变量
//static int age = 10;
//int main() {
//
//    Person::ms_count = 20;
//    Student::ms_count = 10;
//
//    cout << Person::ms_count << endl;
//    cout << age << endl;
//    age = 20;
//    cout << age << endl;
//    getchar();
//    return 0;
//}

class Car {
private:
    static int m_count;
public:
    Car() {
        m_count = 10;
    }
    ~Car() {
        m_count = 0;
    }
    static int getCount() {
        return m_count;
    }
};
//
int Car::m_count = 0;

int main() {
    Car car1;
    cout << car1.getCount() << endl;
    Car car2;
    Car *p = new Car();
    //销毁p，调用析构函数
    delete p;
    cout << Car::getCount() << endl;

    /*Car car1;
    car1.m_count = 10;
    car1.getCount();
   //可以通过指针访问
    p->m_count = 10;
    p->getCount();

    Car::m_count = 20;
    Car::getCount();*/

    getchar();
    return 0;
}

//class Car {
//public:
//    static int m_price;
//    void run() {
//        cout << "run()" << endl;
//
//    }
//};
//
//// 初始化静态成员变量
//int Car::m_price = 0;
//
//int main() {
//    Car car;
//    car.m_price = 10;
//
//    Car car2;
//    car2.m_price = 20;
//
//    Car::m_price = 30;
//
//    Car *p = new Car();
//    p->m_price = 40;
//
//    Car car3;
//    cout << car3.m_price << endl;
//
//
//    getchar();
//    return 0;
//}

