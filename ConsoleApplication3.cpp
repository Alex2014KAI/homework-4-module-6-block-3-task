#include <iostream>
#include "HeaderFile.h"

void print_info(GeometricFigure::Figure* figure) {
    figure->printData();
}

int main()
{
    setlocale(LC_ALL, "Russian");

    GeometricFigure::Figure* Triangle = new GeometricFigure::Triangle;
    GeometricFigure::Figure* RightTriangle = new GeometricFigure::Right_Triangle;
    GeometricFigure::Figure* IsosceleTriangle = new GeometricFigure::Isoscele_Triangle;
    GeometricFigure::Figure* EquilateralTriangle = new GeometricFigure::Equilateral_Triangle;
    GeometricFigure::Figure* Quadrilateral = new GeometricFigure::Quadrilateral;
    GeometricFigure::Figure* Rectangle = new GeometricFigure::Rectangle;
    GeometricFigure::Figure* Square = new GeometricFigure::Square;
    GeometricFigure::Figure* Parallelogram = new GeometricFigure::Parallelogram;
    GeometricFigure::Figure* Rhombus = new GeometricFigure::Rhombus;

    print_info(Triangle);
    print_info(RightTriangle);
    print_info(IsosceleTriangle);
    print_info(EquilateralTriangle);
    print_info(Quadrilateral);
    print_info(Rectangle);
    print_info(Square);
    print_info(Parallelogram);
    print_info(Rhombus);


    delete Triangle;
    delete RightTriangle;
    delete IsosceleTriangle;
    delete EquilateralTriangle;
    delete Quadrilateral;
    delete Rectangle;
    delete Square;
    delete Parallelogram;
    delete Rhombus;
};






