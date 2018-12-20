#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "point.hpp"

class Rectangle: public Point{
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int x, int y, int w, int h);
        virtual  ~Rectangle();
        virtual void draw();
        //void show(){}
        //Предефинирани от Rectangle
        virtual void scale(int,int);
};


#endif /* RECTANGLE_HPP */

