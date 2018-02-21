 #include "stdafx.h"
#include "CppUnitTest.h"
#include "L4.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ArrayL4Test
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 15;

			int* array = new int[n] {2, 43, 10, 5, 7, 8, 48, 10, 54, 90, 61, 1, 13, 35, 17};
			int* OldArray = new int[n] {43, 5, 7, 8, 10, 90, 61, 1, 13, 35, 17};
			int* NewArray = new int[n] {2, 10, 48, 54};

			int S = 4;

			Array::SeparateArray(array, OldArray, NewArray, n, S);

			for (int i = 0; i < n; i++)
			{
				Assert::AreNotEqual(array[i], OldArray[i]);
			}
		}

		TEST_METHOD(TestMethod2)
		{
			int n = 15;

			int* array = new int[n] {2, 43, 10, 5, 7, 8, 48, 10, 54, 90, 61, 1, 13, 35, 17};
			int* OldArray = new int[n] {43, 5, 7, 8, 10, 90, 61, 1, 13, 35, 17};
			int* NewArray = new int[n] {2, 10, 48, 54};

			int S = 4;

			Array::SeparateArray(array, OldArray, NewArray, n, S);

			
				Assert::IsTrue(*array = *OldArray + *NewArray);
			
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 15;

			int* array = new int[n] {2, 43, 10, 5, 7, 8, 48, 10, 54, 90, 61, 1, 13, 35, 17};
			int* OldArray = new int[n] {43, 5, 7, 8, 10, 90, 61, 1, 13, 35, 17};
			

			int S = 4;
			int P = n - S;
			int a = 2;

			Array::BubleSortByRemainder(OldArray, P, a);

			for (int i = 0; i < n; i++) 
			{
				Assert::IsTrue(OldArray[i]%a < OldArray[i+1]%a);
			}

		}
	};
}