/*
 * Дефиниции на методите на Point
 */
#include "point.hpp"
#include <iostream>

void Point::draw() {
    std::cout<<"Point("<<getX()
             <<", "    <<getY()
             <<" visible:"<<isVisible()
             <<")"
             <<std::endl;
}

bool Point::isVisible(){
    return visible;
}

int Point::getY(){
    return y;
}

int Point::getX(){
    return x;
}

void Point::setVisible(bool v){
    visible = v;
}

void Point::setY(int a){
    y = a;
}

void Point::setX(int a){
    x = a;
}

