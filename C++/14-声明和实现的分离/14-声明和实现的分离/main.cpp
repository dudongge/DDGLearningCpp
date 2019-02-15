//
//  main.cpp
//  14-声明和实现的分离
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include <iostream>
#include "Person.hpp"

using namespace std;

int main() {
    Person person;
    person.setAge(20);
    cout << person.getAge() << endl;
    getchar();
    return 0;
}

