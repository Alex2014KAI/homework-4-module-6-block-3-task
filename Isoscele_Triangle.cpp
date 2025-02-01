#include "Isoscele_Triangle.h"

namespace GeometricFigure {

    Isoscele_Triangle::Isoscele_Triangle() : Triangle() {
    _name = "Равнобедренный треугольник";
    _sideC = _sideA;
    _angleC = _angleA;
}

} // end namespace GeometricFigure