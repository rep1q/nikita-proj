#ifndef Square_hpp
#define Square_hpp

#include <iostream>
#include "Figure.hpp"

class Square:public Figure{
private:
    int coordinates_beginX, coordinates_beginY;
    int *length;
public:
    Square():Figure(){
        length = new int(0);
    }
    Square(int _count, int _length):Figure(_count){
        length = new int(_length);
    }
    int square() override;
    void printInfo() override;
    void ChangeCoordinates(int l) override;
    ~Square(){
        delete length;
    }
};

#endif /* Square_hpp */
