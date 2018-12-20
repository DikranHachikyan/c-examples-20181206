#include <iostream>
#include <cstdlib>

#include "point.hpp"
#include "rectangle.hpp"

int main(int argc, char** argv) {
    Point *pn = NULL;
    
    pn = new Rectangle(2, 10,120,230);
    
    pn->draw();
    
    delete pn;
    
    return 0;
}

