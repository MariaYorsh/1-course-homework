#pragma once
#include <iostream>

using namespace std;
 
class QuadraticEquations
{
public:
	QuadraticEquations(double a = 1.0, double b = 1.0, double c = 1.0);
	void SetEquations(double a, double b, double c);
	int GetA() const;
	int GetB() const;
	int GetC() const;
private:
	double Discriminant(double a, double b, double c);
	double * RootsOfEquations(double d, double a, double b);
	double a{ 1 };
	double b{ 1 };
	double c{ 1 };
	void SetA(double value);
	void SetB(double value);
	void SetC(double value);
};