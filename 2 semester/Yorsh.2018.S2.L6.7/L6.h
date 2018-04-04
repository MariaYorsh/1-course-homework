#pragma once

#ifdef L6_EXPORTS
#define L6_API __declspec(dllexport)
#else
#define L6_API __declspec(dllimport)
#endif

namespace Integral
{
	L6_API double SineDividedByValue(double value);
	L6_API double LeftRectangle(double LowerLimit, double UpperLimit, int  k);
	L6_API double RightRectangle(double LowerLimit, double UpperLimit, int k);
}