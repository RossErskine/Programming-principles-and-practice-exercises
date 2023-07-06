#pragma once
#include <math.h>
#include <iostream>
using namespace std;

class Quadratic_formula
{
private:
	double _plus_x=0;
	double _minus_x=0;
	
public:
	double discriminant = 0;
	void quad_Ans_plus(double a, double b, double c)
	{
		discriminant = b * b - 4 * a * c;
		if (discriminant < 0)
		{
			throw "no root!";
		}
		else
		{
			double plus_x = (-b + sqrt(discriminant)) / (2 * a);
			plus_x = plus_x;
		}

	}

	void quad_Ans_minus(double a, double b, double c)
	{
		discriminant = b * b - 4 * a * c;
		if (discriminant < 0)
		{
			throw "no root!";
		}
		double minus_x = (-b - sqrt(discriminant)) / (2 * a);
		_minus_x = minus_x;
	}

	//==============get x ===============//
	const double& GetPlusX() const
	{
		return _plus_x;
	}
	const double& GetMinusX() const
	{
		return _minus_x;
	}
};

