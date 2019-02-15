//
//  Car.cpp
//  15-命名空间
//
//  Created by dudongge on 2019/2/11.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
using namespace std;

namespace DD {
    Car::Car() {
         cout << "DD::Car()" << endl;
    }
    
    Car::~Car() {
         cout << "DD::~Car()" << endl;
    }
}
