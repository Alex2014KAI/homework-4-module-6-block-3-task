#include "Square.h"

namespace GeometricFigure {

    Square::Square() : Quadrilateral() {
        _name = " вадрат";
        _sideA = _sideC = _sideD = _sideB;
        _angleA = _angleB = _angleC = _angleD = 90;
    };

} // end namespace GeometricFigure