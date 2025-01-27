#pragma once

#include "Triangle.h"

namespace GeometricFigure {

    class Right_Triangle : public Triangle {
    public:
        Right_Triangle() : Triangle() {
            _name = "Прямоугольный треугольник";
            _angleC = 90;
        };
    };
} // end namespace GeometricFigure

