/*
 * Дефиниции на методите на Point
 */
#include "point.hpp"
#include <iostream>

//==========================================================
void Point::scale(int, int){}

void Point::redraw(){
    draw();
}

void Point::moveTo(int dx, int dy){
    setX( getX() + dx );
    setY( getY() + dy);
}
//==========================================================
Point::Point(){
    setX(0);
    setY(0);
    setVisible(false);
    
    std::cout<<"Constructor 1 Point ("<<getX()
             <<", "
             <<getY()
             <<")"<<std::endl;     
}

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
    std::cout<<"Constructor 2 Point ("<<getX()
             <<", "
             <<getY()
             <<")"<<std::endl;     
}



void Point::draw() {
    std::cout<<"Draw Point("<<getX()
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

