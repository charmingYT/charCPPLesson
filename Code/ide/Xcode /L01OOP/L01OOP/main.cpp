//
//  main.cpp
//  L01OOP
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>
#include "People.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    People *p = new People();
    p->sayHello();
    delete p;
    std::cout << "Hello, World!\n";
    return 0;
}
