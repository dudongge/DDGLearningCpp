//
//  main.cpp
//  15-命名空间
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
#include "Car.hpp"
#include "Person.hpp"
using namespace std;

//void test() {
//    cout << "test()" << endl;
//}

//namespace NP {
//    int g_no;
//
//    class Person {
//    public:
//        int m_age;
//    };
//    void test() {
//        cout << "NP::test()" << endl;
//    }
//}

//namespace DD {
//    int g_no;
//
//    class Person {
//    public:
//        int m_height;
//    };
//
//    void test() {
//        cout << "DD::test()" << endl;
//    }
//}

//void test1() {
//    NP::g_no = 1;
//    DD::g_no = 2;
//
//    NP::Person *p1 = new NP::Person();
//    p1->m_age = 10;
//
//    DD::Person *p2 = new DD::Person();
//    p2->m_height = 180;
//
//    test();
//    NP::test();
//    DD::test();
//}

//namespace DD {
//    int g_no;
//
//    class Person {
//    public:
//        int m_height;
//    };
//
//    void test() {
//        cout << "DD::test()" << endl;
//    }
//}

void test2() {
    /*using namespace DD;
     g_no = 10;
     Person person;
     test();*/
    
    /*using DD::g_no;
     using DD::Person;
     g_no = 10;
     Person person;*/
}
//namespace DD {
//    int g_no;
//}
//namespace DD {
//    int g_height;
//}

namespace DD {
    int g_no;
    int g_height;
}
//namespace DD {
//    namespace SS {
//        int g_no;
//        class Person {
//        };
//        void test() {
//        }
//    }
//    void test() {
//    }
//}
//
void test() {

}

//void test3() {
//    // 默认的命名空间，没有名字
//    ::DD::SS::g_no = 30;
//    cout << "::DD::SS::g_no--" << ::DD::SS::g_no << endl;
//    DD::SS::g_no = 20;
//    cout << "DD::SS::g_no--" << DD::SS::g_no << endl;
//    using namespace DD;
//    SS::g_no = 30;
//    cout << "SS::g_no--" << SS::g_no << endl;
//    using namespace DD::SS;
//    g_no = 10;
//    cout << "g_no--" << g_no << endl;
//}

int main() {
//    DD::Car car;
//    DD::Person person;
    DD::g_no = 10;
    cout << "DD::g_no--" << DD::g_no << endl;
    DD::g_height = 20;
    cout << "DD::g_height--" << DD::g_height << endl;
    getchar();
    return 0;
}

