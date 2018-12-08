#ifndef POINT_HPP
#define POINT_HPP
/**
 * Декларация на класа Point
 */
class Point{
    private:
        int x;
        int y;
        bool visible;
        //Point *next;
    public:
        //методи за достъп до данните
        void setX(int);
        void setY(int);
        void setVisible(bool);
        
        int  getX();
        int  getY();
        bool isVisible();
        
        //други методи
        void draw();
};

#endif /* POINT_HPP */

