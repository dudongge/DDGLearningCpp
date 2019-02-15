//
//  main.cpp
//  17-成员访问权限
//
//  Created by dudongge on 2019/2/12.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
    int m_no;
public:
    int m_age;
    void run() {
    }
};
//
//class Student : public Person {
//    int m_no;
//    void study() {
//        m_age = 10;
//    }
//};
//
//class GoodStudent : public Student {
//    int m_money;
//    void work() {
//        m_age = 10;
//    }
//};

//class Person {
//private:
//    int m_age;
//public:
//    int m_no;
//};

int main() {
    Person person;
    person.m_age = 10;
    person.run();
    
    getchar();
    return 0;
}

