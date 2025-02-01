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
        Figure();
        int getNumberSides();
        std::string getName();
        virtual void printData();
	};

} // end namespace GeometricFigure


