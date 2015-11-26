//
//  main.cpp
//  L09OverLoad
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class Hello {
    
public:
    void sayHello(){
        printf("hello jikexueyuan\n");
    }
    void sayHello(std::string name){
        std::string str = "hello ";
        str+=name;
        std::cout<<str<<std::endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...

    Hello *h = new Hello();
    h->sayHello("miaomiao");
    std::cout << "Hello, World!\n";
    return 0;
}
