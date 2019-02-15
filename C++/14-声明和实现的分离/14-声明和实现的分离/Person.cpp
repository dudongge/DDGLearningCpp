//
//  Person.cpp
//  14-声明和实现的分离
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
using namespace std;

// ::是域运算符
// 实现 .cpp 源文件
Person::Person() {
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::setAge(int age) {
    this->m_age = age;
}

int Person::getAge() {
    return this->m_age;
}
