#include <iostream>
#include <cstdlib>

#include "point.hpp"
#include "rectangle.hpp"
#include "shape.hpp" 

int main(int argc, char** argv) {
//1. не можем да създаваме обекти от Shape
//    Shape s;
//    Shape *sp = new Shape();
//2. наследниците на Shape, запазват абстрактния си характер (ако ЧВМ не са предефинирани)
//    Point p1;
//    Point *pn = new Point();
    Shape *shp = new Rectangle(10,20,140,400);
    
    shp->redraw();
    
    delete shp;
    return 0;
}

