//
//  Person.cpp
//  15-命名空间
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include "Person.hpp"
#include <iostream>
using namespace std;

namespace DD {
    Person::Person() {
         cout << "DD::Person()" << endl;
    }
    
    Person::~Person() {
         cout << "DD::Person()" << endl;
    }
}
