#pragma once
#include "Triangle.h"

namespace GeometricFigure {

    class Equilateral_Triangle : public Triangle {
    public:
        Equilateral_Triangle() : Triangle() {
            _name = "Равносторонний треугольник";
            _sideA = _sideC;
            _sideB = _sideC;
            _angleA = _angleB;
            _angleC = _angleB;
        };
    };

} // end namespace GeometricFigure


