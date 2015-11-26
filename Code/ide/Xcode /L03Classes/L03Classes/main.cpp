//
//  main.cpp
//  L03Classes
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Man *m = new Man();
    m->sayHello();
    std::cout << "Hello, World!\n";
    return 0;
}
