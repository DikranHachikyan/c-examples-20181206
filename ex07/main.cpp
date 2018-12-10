#include <iostream>
#include <cstdlib>

#include "point.hpp"

int main(int argc, char** argv) {
    Point *p1 = NULL;
    Point *p2 = NULL;
    std::cout<<"start"<<std::endl;
    
    p1 = new Point;
    p2 = new Point(120,130);
    
    p1->draw();
    p2->draw();
    
    delete p1;
    delete p2;
    
    std::cout<<"end"<<std::endl;
    return 0;
}

