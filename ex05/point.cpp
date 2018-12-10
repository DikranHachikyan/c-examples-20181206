/*
 * Дефиниции на методите на Point
 */
#include "point.hpp"
#include <iostream>

Point::~Point(){
    std::cout<<"Destructor Point ("
             <<getX()
             <<", "
             <<getY()
             <<")"
             <<std::endl;
}

Point::Point(int a, int b){
    setX(a);
    setY(b);
    if( getX() > 0 && getY() > 0){
        setVisible(true);
    }
    else{
        setVisible(false);
    }
    std::cout<<"Constructor Point ("<<getX()
             <<", "
             <<getY()
             <<")"<<std::endl;     
}



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

