#pragma once
#include <iostream>
#include "Figure.h"

namespace GeometricFigure {

    class Triangle : public Figure {
    public:
        Triangle();
        void printData() override;
    };
} // end namespace GeometricFigure

