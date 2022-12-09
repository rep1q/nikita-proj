#include <iostream>
#include "Figure.hpp"
#include "Square.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

using std::cin;
using std::cout;

int main() {
    int n;
    cout<<"Введите какую фигуру вы хотите создать\n1 - Прямоугольник\n2 - Квадрат\n3 - Круг\n";
    cin>>n;
    switch (n) {
        case 1:
        {
            int lengthA,lengthB;
            cout<<"Введите длину сторон прямоугольника: ";
            cin>>lengthA>>lengthB;
            cout<<"\n";
            Figure* rectangle = new Rectangle(0,lengthA,lengthB);
            rectangle->printInfo();
            cout<<"Введите смещение: ";
            cin>>lengthA;
            rectangle->ChangeCoordinates(lengthA);
            rectangle->printInfo();
            break;
        }
        case 2:
        {
            int length;
            cout<<"Введите длину сторон квадрата: ";
            cin>>length;
            cout<<"\n";
            Figure* square = new Square(0,length);
            square->printInfo();
            cout<<"Введите смещение: ";
            cin>>length;
            square->ChangeCoordinates(length);
            square->printInfo();
            break;
        }
        case 3:
        {
            int length;
            cout<<"Введите radius of circle: ";
            cin>>length;
            cout<<"\n";
            Figure* circle = new Circle(0,length);
            circle->printInfo();
            cout<<"Введите смещение: ";
            cin>>length;
            circle->ChangeCoordinates(length);
            circle->printInfo();
            break;
        }
        default:
            cout<<"Ошибка ввода, повторите попытку:\n";
            cin>>n;
            break;
    }
    return 0;
}
