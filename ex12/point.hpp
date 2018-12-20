#ifndef POINT_HPP
#define POINT_HPP
/**
 * Декларация на класа Point
 */
#include "shape.hpp"

class Point:public Shape{
    private:
        int x;
        int y;
        bool visible;
        //Point *next;
    public:
        //Конструктор на класа
        Point(int,int);
        Point();
        //Деструктор на класа
       virtual ~Point();
        //методи за достъп до данните
        void setX(int);
        void setY(int);
        void setVisible(bool);
        
        int  getX();
        int  getY();
        bool isVisible();
        
        //други методи
        virtual void draw();
        
        //void drawColor(int,int,int);
        //Предефинирани методи от Shape
        virtual void moveTo(int,int);
        virtual void redraw();
        virtual void scale(int,int);
};

#endif /* POINT_HPP */

