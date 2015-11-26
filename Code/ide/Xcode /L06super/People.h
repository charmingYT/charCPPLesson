//
//  People.hpp
//  L01OOP
//
//  Created by Mr.Beta on 15/11/25.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>


    class People{
    private:
        int age;
        int sex;
    public:
        People();
        People(int age,int sex);
        int getAge();
        int getSex();
        void sayHello();
        
    };

