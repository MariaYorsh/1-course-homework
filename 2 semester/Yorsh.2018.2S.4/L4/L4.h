#pragma once

#ifdef L4_EXPORTS
#define L4_API __declspec(dllexport) 
#else
#define L4_API __declspec(dllimport) 
#endif

namespace Array
{
	L4_API int * AllocateMemory(int n);
	L4_API void InitArray(int * const a, int n);
	L4_API void FreeMemory(int* const);
	L4_API void DisplayArray(const int * a, int n);
	L4_API void RemoveElement(int * const a, int& n, int k);
	L4_API int CountingElements(int * const a, int n);
	L4_API void SeparateArray(int * const a, int * const oldA, int * const newA, int n, int S);
	L4_API void Swap(int& a, int& b);
	L4_API void BubleSortByRemainder(int * const A, int P, int a);


}