#include <iostream>
#include <cstdlib>

#include "point.hpp"

int main(int argc, char** argv) {
    int *num = NULL;
    int *arr = NULL;
    std::cout<<"start"<<std::endl;
    
    num = new int(120);
    arr = new int[10]; //масив от int
    
    std::cout<<"address:"<<num<<" value:"<<*num<<std::endl;
    for( int i = 0; i < 10 ; i++){
        *(arr + i) = i+i;
        std::cout<<"["<<i<<"]=>"<<*(arr + i)<<std::endl;
    }
    
    delete num;
    //освобождаване на памет за масив
    delete []  arr;
    std::cout<<"end"<<std::endl;
    return 0;
}

