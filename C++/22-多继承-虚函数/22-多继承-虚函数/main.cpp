//
//  main.cpp
//  22-多继承-虚函数
//
//  Created by dudongge on 2019/2/20.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;
//学生类
class Student {
public:
    virtual void study() {
        cout << "Student::study()" << endl;
    }
};
//工人类
class Worker {
public:
    virtual void work() {
        cout << "Worker::work()" << endl;
    }
};
//毕业生类
class Undergraduate : public Student, public Worker {
public:
    void study() {
        cout << "Undergraduate::study()" << endl;
    }
    void work() {
        cout << "Undergraduate::work()" << endl;
    }
    void play() {
        cout << "Undergraduate::play()" << endl;
    }
};

int main() {
    
    Undergraduate ug;
    ug.study();
    
    Student *stu = new Undergraduate();
    stu->study();
    
    Worker *worker = new Undergraduate();
    worker->work();
    
    cout << sizeof(Undergraduate) << endl;
    
    getchar();
    return 0;
}

