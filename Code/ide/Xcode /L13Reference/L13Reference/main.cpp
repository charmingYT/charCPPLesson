//
//  main.cpp
//  L13Reference
//
//  Created by Mr.Beta on 15/11/26.
//  Copyright © 2015年 sipsys. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x,y;
    
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void add(Point &p){
        this->x+=x;
        this->y+=y;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Point p(1,3);
    Point p1(2,3);
    p.add(p1);
    
    std::cout<<p.getY()<<"\n";
    std::cout << "Hello, World!\n";
    return 0;
}
