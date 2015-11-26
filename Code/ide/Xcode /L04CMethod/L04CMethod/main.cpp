//
//  main.cpp
//  L04CMethod
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class Object {
public:
    Object(){
        printf("Creat Object\n");
    }
    ~Object(){
        printf("Delete Object\n");
    }
};

void runObject(){
    {
    Object obj;
    }
    printf("runObject end\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    Object *obj = new Object();
//    delete obj;
//    Object obj;
    runObject();
    printf("end\n");
    std::cout << "Hello, World!\n";
    return 0;
}
