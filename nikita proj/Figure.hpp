#ifndef Figure_hpp
#define Figure_hpp

#include <iostream>

class Figure{
protected:
    int *count;
public:
    Figure();//конструктор без параметров
    Figure(int _count);//конструктор с параметрами
    virtual void printInfo() = 0;
    virtual int square() = 0;
    virtual void ChangeCoordinates(int l) = 0;
    ~Figure(){
        delete count; //деструктор
    }
};

#endif /* Figure_hpp */
