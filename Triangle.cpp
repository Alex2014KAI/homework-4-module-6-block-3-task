#include "Triangle.h"

namespace GeometricFigure {

    Triangle::Triangle() : Figure() {
        _name = "Треугольник";
        _numberSides = 3;
        _sideA = 10;
        _sideB = 20;
        _sideC = 30;
        _angleA = 50;
        _angleB = 60;
        _angleC = 70;
    };

    void Triangle::printData() {
        std::cout << getName() << ":" << std::endl;
        std::cout << "Стороны: ";
        std::cout << "a = " << _sideA << " ";
        std::cout << "b = " << _sideB << " ";
        std::cout << "c = " << _sideC << " " << std::endl;
        std::cout << "Углы: ";
        std::cout << "A = " << _angleA << " ";
        std::cout << "B = " << _angleB << " ";
        std::cout << "C = " << _angleC << " ";
        std::cout << std::endl;
        std::cout << std::endl;
    };

} // end namespace GeometricFigure
