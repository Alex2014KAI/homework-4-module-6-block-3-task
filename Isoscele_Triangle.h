#pragma once

#include "Triangle.h"

namespace GeometricFigure {

    class Isoscele_Triangle : public Triangle {
    public:
        Isoscele_Triangle() : Triangle() {
            _name = "Равнобедренный треугольник";
            _sideC = _sideA;
            _angleC = _angleA;
        }
    };
} // end namespace GeometricFigure

