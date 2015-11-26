//
//  main.cpp
//  L11pseudoFunctions
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class Hello {
    
public:
    void operator()(){
        printf("Hello cpp\n");
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Hello h;
    h();
    std::cout << "Hello, World!\n";
    return 0;
}
