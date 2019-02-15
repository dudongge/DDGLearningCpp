//
//  main.cpp
//  19-父类的构造函数
//
//  Created by dudongge on 2019/2/13.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
    int m_age;
public:
    //父类的无参构造函数
    Person() {
        cout << "Person()" << endl;
    }
    //父类的有参构造函数
    Person(int age) :m_age(age) {
        cout << "Person(int age)" << endl;
    }
    ~Person() {
        cout << "~Person()" << endl;
    }
};

class Student : public Person {
    int m_score;
public:
    //子类的无参构造函数
    Student() {
        cout << "Student()" << endl;
    }
    //子类的无参构造函数
    Student(int age, int score) :m_score(score), Person(age) {
        cout << "Student(int age, int score)" << endl;
    }
    ~Student() {
        cout << "~Student" << endl;
    }
};

//class Person {
//    int m_age;
//public:
//    Person(int age) :m_age(age) {
//        cout << "Person(int age)" << endl;
//    }
//};
//
//class Student : public Person {
//    int m_score;
//public:
//    Student() :Person(0) {
//
//    }
//};

int main() {
//    Student student;
//    Student student2(10,30);
    
    Student *student = new Student();
    delete student;
    
    getchar();
    return 0;
}

