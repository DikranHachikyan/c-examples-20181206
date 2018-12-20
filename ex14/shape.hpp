#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
class Shape{
    public:
        virtual void moveTo(int,int)=0;
        virtual void redraw()=0;
        virtual void scale(int,int)=0;
        //Default Destructor
//       ~Shape(){
//         std::cout<<"Default Destructor Shape"<<std::endl;  
//       } 
        virtual ~Shape(){
         std::cout<<"Destructor Shape"<<std::endl;          
        } 
};

#endif /* SHAPE_HPP */

