#pragma once
#include "Figure.h"

namespace GeometricFigure {

    class Quadrilateral : public Figure {
    protected:
        int _sideD;
        int _angleD;
    public:
        Quadrilateral() : Figure() {
            _name = "Четырёхугольник";
            _numberSides = 4;
            _sideA = 10;
            _sideB = 20;
            _sideC = 30;
            _sideD = 40;
            _angleA = 50;
            _angleB = 60;
            _angleC = 70;
            _angleD = 80;
        };
        void printData() override;
    };

} // end namespace GeometricFigure


