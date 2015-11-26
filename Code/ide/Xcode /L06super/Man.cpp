//
//  Man.cpp
//  L03Classes
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include "Man.h"

//执行父类的构造函数
Man::Man(int age):People(age,1){
    
People::sayHello();
}

void Man::sayHello(){
//    指定类访问父类函数
    People::sayHello();
    printf("Man Hello Cpp\n");
}

