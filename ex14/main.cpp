#include <iostream>
#include <cstdlib>

class A{
    private:
        int *data;
        int value;
    public:
        A(int val){
            data = new int(val);
            value = val;
        }
        ~A(){
            delete data;
            std::cout<<"Destructor A"<<std::endl;
        }
        
        void show(){
            std::cout<<"data:"<<*data
                     <<" address:"<<data
                     <<" value:"<<value
                     <<std::endl;
        }
        
};

void print( A &ob){
    ob.show();
}

int main(int argc, char** argv) {
    
    A aObj(10);
    A *ap = NULL;
    
    aObj.show();
    print( aObj);
    aObj.show();

    //print(*ap);
    return 0;
}

