#include "stdafx.h"
#include <iostream>

using namespace std;

int binaryCount(int n, int digit);


int main()
{
	int number;
	cout << "Enter integer number: " << endl;
	cin >> number;
	cout << "Count of 1 in binary code is " << binaryCount(number, 1) << endl;
	cout << "Count of 0 in binary code is " << binaryCount(number, 0)<< endl;
    return 0;
}

int binaryCount(int n, int digit)
{
	int sum = 0, p;
	{
		while (n > 0)
		{
			p = n % 2;
			if (p == digit)
			{
				sum++;
			}
			n = n / 2;
		}
	}
	return sum;
}