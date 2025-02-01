#include "Figure.h"

namespace GeometricFigure {

    Figure::Figure() : _name("Фигура"), _numberSides(0), _sideA(0), _sideB(0), _sideC(0), _angleA(0), _angleB(0), _angleC(0) {};

    int Figure::getNumberSides() {
        return _numberSides;
    };

    std::string Figure::getName() {
        return _name;
    };

    void Figure::printData() {
        std::cout << getName() << ": " << getNumberSides() << std::endl;
    };

} // end namespace GeometricFigure