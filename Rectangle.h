#pragma once
#include "Quadrilateral.h"

namespace GeometricFigure {

    class Rectangle : public Quadrilateral {
    public:
        Rectangle() : Quadrilateral() {
            _name = "Прямоугольник";
            _sideC = _sideA;
            _sideD = _sideB;
            _angleA = _angleB = _angleC = _angleD = 90;
        };

    };
} // end namespace GeometricFigure
