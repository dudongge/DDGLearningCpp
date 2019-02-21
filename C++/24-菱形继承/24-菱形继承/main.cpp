//
//  main.cpp
//  24-菱形继承
//
//  Created by dudongge on 2019/2/20.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
public:
    int m_age;
};

class Student : virtual public Person {
public:
    int m_score;
};

class Worker : virtual public Person {
public:
    int m_salary;
};

class Undergraduate :   public Student,  public Worker {
public:
    int m_grade;
};

int main() {
    Undergraduate ug;
    ug.m_grade = 10;
    ug.Student::m_age = 20;
    getchar();
    return 0;
}

//class Student :  public Person {
//public:
//    int m_score;
//};
//
//class Worker :  public Person {
//public:
//    int m_salary;
//};
//
//class Undergraduate : public Student, public Worker {
//public:
//    int m_grade;
//};
//
//int main() {
//    Undergraduate ug;
//    ug.m_grade = 10;
//    ug.m_score = 20;
//    ug.Student::m_age0 = 20;
//    getchar();
//    return 0;
//}
