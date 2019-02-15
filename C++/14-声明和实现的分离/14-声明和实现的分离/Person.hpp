//
//  Person.hpp
//  14-声明和实现的分离
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//


// 声明 .h 头文件
class Person {
    int m_age;              //属性
public:
    Person();               //构造函数
    ~Person();              //析构函数
    void setAge(int age);   //setAge函数
    int getAge();           //getAge函数
};
