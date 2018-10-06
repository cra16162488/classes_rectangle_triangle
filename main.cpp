#include <iostream>

#include "Rectangle.hpp"
#include "Triangle.hpp"

using namespace std;
int main(){
    Triangle  triangle(3, 5, 4);
    Rectangle rectangle(10, 5);

    std::cout << "Rect perimeter : " << rectangle.getPerimeter() << std::endl;
    std::cout << "Rect area : "      << rectangle.getArea()      << std::endl;

    rectangle.setDimensions(20, 10);

    std::cout << "Rect 2 perimeter : " << rectangle.getPerimeter() << std::endl;
    std::cout << "Rect 2 area : "      << rectangle.getArea()      << std::endl;

    std::cout << "Triangle perimeter : " << triangle.getPerimeter() << std::endl;
    std::cout << "Triangle area : "      << triangle.getArea()      << std::endl;

    triangle.setDimensions(6, 10, 8);

    std::cout << "Triangle 2 perimeter : " << triangle.getPerimeter() << std::endl;
    std::cout << "Triangle 2 area : "      << triangle.getArea()      << std::endl;
    std::cout << "Triangle 2 side 2 : "    << triangle.getSize(2);

    return 0;
}
