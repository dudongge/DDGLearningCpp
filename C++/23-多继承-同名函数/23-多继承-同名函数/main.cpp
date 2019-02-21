//
//  main.cpp
//  23-多继承-同名函数
//
//  Created by dudongge on 2019/2/20.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

//定义一个学生类
class Student {
public:
    void eat() {
        cout << "Student::eat()" << endl;
    }
};

//定义一个工人类
class Worker {
public:
    void eat() {
        cout << "Worker::eat()" << endl;
    }
};

//定义一个毕业生类
class Undergraduate : public Student, public Worker {
public:
    void eat() {
        cout << "Undergraduate::eat()" << endl;
    }
};

//调用
int main() {
    Undergraduate ug;
    ug.eat();
    ug.Worker::eat();
    ug.Student::eat();
    ug.Undergraduate::eat();

    getchar();
    return 0;
}
