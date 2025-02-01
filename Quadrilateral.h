#pragma once
#include "Figure.h"

namespace GeometricFigure {

    class Quadrilateral : public Figure {
    protected:
        int _sideD;
        int _angleD;
    public:
        Quadrilateral();
        void printData() override;
    };

} // end namespace GeometricFigure


