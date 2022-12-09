#include "Circle.hpp"

int Circle::square(){
    int square = 3*(*radius)*(*radius);
    return square;
}

void Circle::printInfo(){
    std::cout<<"Center circle: ("<<center_coordinatesX<<","<<center_coordinatesY<<")\nRadius circle: "<<*radius<<"\nCircle square: "<<square()<<"\n";
}

void Circle::ChangeCoordinates(int l){
    center_coordinatesY+=l;
    center_coordinatesX+=l;
}
