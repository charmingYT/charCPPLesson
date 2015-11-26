//
//  main.cpp
//  L02NS
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace jikexueyuan;

int main(int argc, const char * argv[]) {
    // insert code here...
    People *p = new People();
    p->sayHello();
    delete p;
    std::cout << "Hello, World!\n";
    return 0;
}
