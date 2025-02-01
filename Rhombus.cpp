#include "Rhombus.h"

namespace GeometricFigure {

    Rhombus::Rhombus() : Quadrilateral() {
        _name = "����";
        _sideA = _sideB = _sideC = _sideD = 30;
        _angleA = _angleC = 30;
        _angleB = _angleD = 40;
    };

} // end namespace GeometricFigure