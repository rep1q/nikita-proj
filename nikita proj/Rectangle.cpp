#include "Rectangle.hpp"

int Rectangle::square(){
    return (*lengthA)*(*lengthB);
}

void Rectangle::ChangeCoordinates(int l){
    coordinates_beginX+=l;
    coordinates_beginY+=l;
}

void Rectangle::printInfo(){
    std::cout<<"Пусть точка A - левая нижняя точка прямоугольника, В - левая верхняя точка прямоугольника, С - правая верхняя точка прямоугольника, D - правая нижняя точка прямоугольника:\n"<<"A: ("<<coordinates_beginX<<","<<coordinates_beginY<<")\n"<<"B: ("<<coordinates_beginX<<","<<coordinates_beginY+(*lengthA)<<")\n"<<"C: ("<<coordinates_beginX+(*lengthB)<<","<<coordinates_beginY+(*lengthA)<<")\n"<<"D: ("<<coordinates_beginX+(*lengthB)<<","<<coordinates_beginY<<")\n\nПлощадь прямоугольника: "<<square()<<"\n";
}
