//
//  main.cpp
//  13-析构函数
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
public:
    // 对象创建完毕的时候调用
    Person() {
        cout << "初始化--Person()" << endl;
    }
    // 对象销毁(内存被回收)的时候调用
    ~Person() {
        cout << "析构~~Person()" << endl;
    }
};

//void test() {
//    Person person;
//}
/*{
 Person person;
 }*/

/*Person *p = new Person();
 
 delete p;*/

/*Person *p = (Person *) malloc(sizeof(Person));
 
 free(p);*/

int main() {
    Person *p = new Person();
    delete p;
//    Person *p = (Person *) malloc(sizeof(Person));
//    free(p);
    getchar();
    return 0;
}

