//
//  main.cpp
//  L06super
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Man *m = new Man(21);
    m->People::sayHello();
    std::cout << "Hello, World!\n";
    return 0;
}
