#include "Quadrilateral.h"

namespace GeometricFigure {

    Quadrilateral::Quadrilateral() : Figure() {
        _name = "Четырёхугольник";
        _numberSides = 4;
        _sideA = 10;
        _sideB = 20;
        _sideC = 30;
        _sideD = 40;
        _angleA = 50;
        _angleB = 60;
        _angleC = 70;
        _angleD = 80;
    };

    void Quadrilateral::printData() {
        std::cout << getName() << ":" << std::endl;
        std::cout << "Стороны: ";
        std::cout << "a = " << _sideA << " ";
        std::cout << "b = " << _sideB << " ";
        std::cout << "c = " << _sideC << " ";
        std::cout << "d = " << _sideD << std::endl;
        std::cout << "Углы: ";
        std::cout << "A = " << _angleA << " ";
        std::cout << "B = " << _angleB << " ";
        std::cout << "C = " << _angleC << " ";
        std::cout << "D = " << _angleD << " ";
        std::cout << std::endl;
        std::cout << std::endl;
    };
} // end namespace GeometricFigure