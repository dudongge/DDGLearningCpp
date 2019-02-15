//
//  sum.cpp
//  03-extern-C
//
//  Created by dudongge on 2019/1/31.
//  Copyright © 2019 dudongge. All rights reserved.
//

#include "sum.hpp"
#include "minus.h"
// _sum
int sum(int a, int b) {
    return a + b;
}

int testMinus(int a, int b) {
    return  minus(a, b);
}
