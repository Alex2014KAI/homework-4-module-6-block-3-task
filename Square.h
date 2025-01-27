#pragma once
#include "Quadrilateral.h"

namespace GeometricFigure {

    class Square : public Quadrilateral {
    public:
        Square() : Quadrilateral() {
            _name = " вадрат";
            _sideA = _sideC = _sideD = _sideB;
            _angleA = _angleB = _angleC = _angleD = 90;
        };
    };
} // end namespace GeometricFigure
