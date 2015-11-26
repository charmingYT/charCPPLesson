//
//  main.cpp
//  L14FriendClass
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class A {
    friend class B;
    
private:
    int num;
    
public:
    A(){
        num = 10;
    }
};

class B:public A {
    
public:
    B(){
        printf("%d\n",num);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    B b;
    std::cout << "Hello, World!\n";
    return 0;
}
