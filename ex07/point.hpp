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
        //Конструктор на класа
        Point(int,int);
        Point();
        //Деструктор на класа
        ~Point();
        //методи за достъп до данните
        void setX(int);
        void setY(int);
        void setVisible(bool);
        
        int  getX();
        int  getY();
        bool isVisible();
        
        //други методи
        void draw();
        
        //void drawColor(int,int,int);
};

#endif /* POINT_HPP */

