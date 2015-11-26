//
//  main.cpp
//  L12FunctionPoint
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class Object;
typedef void(Object::*SayHi)() ;

class Object {
    
public:
    void (Object::*sayHi)();
};

class Hello:public Object {
public:
    Hello(){
        sayHi = (SayHi)(&Hello::HelloSayHi);
        (this->*sayHi)();
    }
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Hello *h = new Hello();
    delete h;
    std::cout << "Hello, World!\n";
    return 0;
}
