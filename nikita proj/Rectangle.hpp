#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <iostream>
#include "Figure.hpp"

class Rectangle:public Figure{
private:
    int coordinates_beginX, coordinates_beginY;
    int *lengthA, *lengthB;
public:
    Rectangle():Figure(){
        lengthA = new int(0);
        lengthB = new int(0);
    }
    Rectangle(int _count, int _lengthA, int _lengthB):Figure(_count){
        lengthA = new int(_lengthA);
        lengthB = new int(_lengthB);
    }
    void printInfo() override;
    void ChangeCoordinates(int l) override;
    int square() override;
    ~Rectangle(){
        delete lengthA;
        delete lengthB;
    }
};

#endif /* Rectangle_hpp */
