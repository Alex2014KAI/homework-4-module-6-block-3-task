#include "Figure.h"

namespace GeometricFigure {

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