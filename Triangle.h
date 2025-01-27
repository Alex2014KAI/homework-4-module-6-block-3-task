#pragma once
#include <iostream>
#include "Figure.h"

namespace GeometricFigure {

    class Triangle : public Figure {
    public:
        Triangle() : Figure() {
            _name = "Треугольник";
            _numberSides = 3;
            _sideA = 10;
            _sideB = 20;
            _sideC = 30;
            _angleA = 50;
            _angleB = 60;
            _angleC = 70;
        };
        void printData() override;
    };
} // end namespace GeometricFigure

