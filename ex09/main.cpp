#include <iostream>
#include <cstdlib>

#include "rectangle.hpp"

int main(int argc, char** argv) {
    //Rectangle rc(10,20,120,300);
    Rectangle *pr = new Rectangle(1,2,300,300);
    
    pr->draw();
    
    delete pr;
    return 0;
}

