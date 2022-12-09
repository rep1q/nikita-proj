#ifndef Circle_hpp
#define Circle_hpp

#include <iostream>

#include "Figure.hpp"
class Circle:public Figure{
private:
    int *radius;
    int center_coordinatesX = 0, center_coordinatesY = 0;
public:
    Circle():Figure(){
        radius = new int(0);
    }
    Circle(int _count, int _radius):Figure(_count){
        radius = new int(_radius);
    }
    int square() override;
    void printInfo() override;
    ~Circle(){
        delete radius;
    }
    void ChangeCoordinates(int l) override;
};

#endif /* Circle_hpp */
