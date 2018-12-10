#include <iostream>
#include <cstdlib>

#include "point.hpp"

int main(int argc, char** argv) {
    //Point - клас
    //p     - обект, представител на класа
    Point p1(1,2), p2; 
    std::cout<<"start"<<std::endl;
    
    p1.draw();
    p2.draw();
    
    p1.setX(10);
    p1.setY(20);
    p1.setVisible(true);
    
    p1.draw();
    
    std::cout<<"end"<<std::endl;
    return 0;
}

