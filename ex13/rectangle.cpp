#include "rectangle.hpp"
#include <iostream>

//============================================================
void Rectangle::scale(int dw, int dh){
    width  += dw;
    height += dh;
}
//============================================================
void Rectangle::draw(){
    Point::draw();
    std::cout<<"Draw Rectangle ["<<width<<","<<height<<"]"<<std::endl;
}

Rectangle::~Rectangle(){
    
    std::cout<<"Destructor Rectangle["
             <<width
             <<","
             <<height
             <<"]"
             <<std::endl;
}

Rectangle::Rectangle()
          :Point(){
    width = 0;
    height= 0;
    
    std::cout<<"Constructor 2 Rectangle["
             <<width
             <<","
             <<height
             <<"]"
             <<std::endl;
}

Rectangle::Rectangle(int x, int y, int w, int h)
          :Point(x,y){
    width  = w;
    height = h;
    std::cout<<"Constructor 1 Rectangle["
             <<width
             <<","
             <<height
             <<"]"
             <<std::endl;
}
