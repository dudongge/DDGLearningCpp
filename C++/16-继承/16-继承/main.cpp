//
//  main.cpp
//  16-继承
//
//  Created by dudongge on 2019/2/12.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person {
    int m_age;
    void run() {
        cout << "run()" << endl;
    }
};

struct Student : Person {
    int m_score;
    void study() {
        cout << "study()" << endl;
    }
};


int main() {
    
    Person person;
    person.m_age = 10;
    person.run();
    cout << person.m_age << endl;
    
    Student stu;
    stu.m_age = 20;     //调用父类的属性
    stu.m_score = 100;  //调用自己的属性
    stu.study();        //调用自己的方法
    stu.run();          //调用父类的方法
    cout << stu.m_age << endl;
    cout << stu.m_score << endl;

    
    getchar();
    return 0;
}
