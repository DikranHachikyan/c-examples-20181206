#include <iostream>
#include <cstdlib>

#include "point.hpp"

int main(int argc, char** argv) {
    //Point - клас
    //p     - обект, представител на класа
    Point p; 
    
    p.draw();
    
    p.setX(10);
    p.setY(20);
    p.setVisible(true);
    
    p.draw();
    return 0;
}

