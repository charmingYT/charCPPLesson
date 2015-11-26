//
//  main.cpp
//  L07Functions
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>
#include "Man.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    
    People *p = new Man(20);
    p->sayHello();// 虚函数
    p->eat();//纯虚函数
    
//    std::cout << "Hello, World!\n";
    return 0;
}
