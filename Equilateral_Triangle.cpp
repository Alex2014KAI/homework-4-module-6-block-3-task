#include "Equilateral_Triangle.h"

namespace GeometricFigure {

    Equilateral_Triangle::Equilateral_Triangle() : Triangle() {
        _name = "Равносторонний треугольник";
        _sideA = _sideC;
        _sideB = _sideC;
        _angleA = _angleB;
        _angleC = _angleB;
    };

} // end namespace GeometricFigure