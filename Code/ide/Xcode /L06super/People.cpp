//
//  People.cpp
//  L01OOP
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include "People.h"

    People::People(){
        this->age = 10;
        this->sex = 1;
    }
    People::People(int age,int sex){
        this->age = age;
        this->sex = sex;
    }
    
    int People::getAge(){
        return this->age;
    }
    
    int People::getSex(){
        return this->sex;
    }
    void People::sayHello(){
        printf("People Hello Cpp\n");
    }

