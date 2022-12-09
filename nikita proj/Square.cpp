#include "Square.hpp"

int Square::square(){
    int square = 2*(*length);
    return square;
}

void Square::printInfo(){
    std::cout<<"Пусть точка A - левая нижняя точка квадрата, В - левая верхняя точка квадрата, С - правая верхняя точка квадрата, D - правая нижняя точка квадрата:\n"<<"A: ("<<coordinates_beginX<<","<<coordinates_beginY<<")\n"<<"B: ("<<coordinates_beginX<<","<<coordinates_beginY+(*length)<<")\n"<<"C: ("<<coordinates_beginX+(*length)<<","<<coordinates_beginY+(*length)<<")\n"<<"D: ("<<coordinates_beginX+(*length)<<","<<coordinates_beginY<<")\n\nПлощадь квадрата: "<<square()<<"\n";
}

void Square::ChangeCoordinates(int l){
    coordinates_beginY+=l;
    coordinates_beginX+=l;
}
