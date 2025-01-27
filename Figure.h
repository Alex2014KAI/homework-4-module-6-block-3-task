#pragma once
#include <iostream>

namespace GeometricFigure {

	class Figure
	{
    protected:
        std::string _name;
        int _numberSides;

        int _sideA;
        int _sideB;
        int _sideC;

        int _angleA;
        int _angleB;
        int _angleC;
    public:
        Figure() : _name("Фигура"), _numberSides(0), _sideA(0), _sideB(0), _sideC(0), _angleA(0), _angleB(0), _angleC(0) {};
        int getNumberSides();
        std::string getName();
        virtual void printData();
	};

} // end namespace GeometricFigure


