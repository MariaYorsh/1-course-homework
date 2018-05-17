#include "stdafx.h"
#include "TextBinary.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

Integer::Integer(char* num)
{
	this->SetIntegerNumbers;
}

void Integer::SetInteger(int *)
{
	for (int i = 0; i < M; i++)
	{
		if (integerNum[i] >= 0)
			this->integerNum[i] = integerNum[i];
		else
			throw std::invalid_argument("Number must be positive!!!");
	}
}

void Integer::SetBase(int p)
{
	if (p >= 2 && p <= 16)
		this->base;
	else
		throw std::invalid_argument("The base must be from 2 to 16!!!");
}

void Integer::DisplayInteger()
{
	for (int i = 0; i < M; i++)
		cout << this->integerNum[i] << "  ";
}

void Integer::EnterInteger()
{
	int p;
	cout << " Enter the  base: " << endl;
	cin >> p;
	int* integerNum = new int[M];
	cout << "Enter numbers:" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> integerNum[i];
	}
	this->SetIntegerNumbers(integerNum, str, base);
	delete[] integerNum;
}

void Integer::SetIntegerNumbers(int* interegNum, char str, int base)
{
	for (int i = 0; i < M; i++)
	{
		TransformDecimalNumberToAny(integerNum[i], str[i], base);
	}
	this->str;
}

//int Integer::TransformDecimalNumberToBinary(int number)
//{
//	int t = 0, d = 1;
//	while (number)
//	{
//		t += (number % 2)*d;
//		number = number / 2;
//		d = d * 10; 
//	}
//	return t;
//}


char *  Integer::TransformDecimalNumberToAny(int value, char * str, int base)
{
	char str[100];
	if(base == 2)
	itoa(value, str, 2);
	else if(base == 8)
	itoa(value, str, 8); 
	else if(base == 10)
	itoa(value, str, 10); 
	else 
	itoa(value, str, 16); 

	return str;
}
