#pragma once
#include "Quadrilateral.h"

namespace GeometricFigure {

    class Rhombus : public Quadrilateral {
    public:
        Rhombus() : Quadrilateral() {
            _name = "Ромб";
            _sideA = _sideB = _sideC = _sideD = 30;
            _angleA = _angleC = 30;
            _angleB = _angleD = 40;
        };
    };
} // end namespace GeometricFigure


