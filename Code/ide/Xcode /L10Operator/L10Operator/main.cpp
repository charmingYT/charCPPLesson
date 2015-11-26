//
//  main.cpp
//  L10Operator
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
        return this->x;
    }
    int getY(){
        return this->y;
    }
    
    void add(Point p){
        add(p.getX(),p.getY());
    }
    void add(int x,int y){
        this->x+=x;
        this->y+=y;
    }
    
    void operator+=(Point p){
        add(p);
    }
};

int main(int argc, const char * argv[]) {
    
//    Point p(10,10);
//    p.add(Point(20, 20));
//    p+=Point(13,13);
    
    Point *p = new Point(5,5);
    (*p)+=Point(2,2);
    std::cout<<p->getY()<<"\n";
    std::cout << "Hello, World!\n";
    return 0;
}
