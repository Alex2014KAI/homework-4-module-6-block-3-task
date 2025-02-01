#include "Rectangle.h"

namespace GeometricFigure {

    Rectangle::Rectangle() : Quadrilateral() {
        _name = "Прямоугольник";
        _sideC = _sideA;
        _sideD = _sideB;
        _angleA = _angleB = _angleC = _angleD = 90;
    };

} // end namespace GeometricFigure