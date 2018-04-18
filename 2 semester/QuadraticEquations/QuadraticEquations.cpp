#include "stdafx.h"
#include "QuadraticEquations.h"
#include <stdexcept>

QuadraticEquations::QuadraticEquations(double a, double b, double c)
{
	SetEquations(a, b, c);
}

void QuadraticEquations::SetEquations(double a, double b, double c)
{
	SetA(a);
	SetB(b);
	SetC(c);
}

int QuadraticEquations::GetA() const
{
	return a;
}

int QuadraticEquations::GetB() const
{
	return b;
}

int QuadraticEquations::GetC() const
{
	return c;
}

double QuadraticEquations::Discriminant(double a, double b, double c)
{ 
	double d = GetB()*GetB() - 4 * GetA() * GetC();
	return d;
}

double * QuadraticEquations::RootsOfEquations(double d, double a, double b)
{
	double roots[2];
	if (d < 0)
	{
		throw std::invalid_argument("The roots don't exist, because Discriminant cant less than 0!");
	}
	else if (d == 0)
		{
			roots[0] = (-GetB()) / (2 * GetA());
		}
	else
	{
		roots[0] = (-GetB() + sqrt(d)) / (2 * GetA());
		roots[1] = (-GetB() -  sqrt(d)) / (2 * GetA());
	}
	return roots;
}



void QuadraticEquations::SetA(double value)
{
	if (value == 0)
	{
		throw std::invalid_argument("This value cant equal zero!!! Try again!!!");
	}
    a = value;
}

void QuadraticEquations::SetB(double value)
{
	b = value;
}

void QuadraticEquations::SetC(double value)
{
	 c = value;
}
