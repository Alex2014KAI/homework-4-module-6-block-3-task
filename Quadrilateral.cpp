#include "Quadrilateral.h"

namespace GeometricFigure {

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