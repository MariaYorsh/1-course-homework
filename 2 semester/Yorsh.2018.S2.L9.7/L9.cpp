// 12.04.2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
//#include <stdlib>
//#include <process>

using namespace std;

void CreateFile(char* fileName, int n);
int ContentsFile(char*);
int* InitArray(char*, int);
void BubbleSort(int*, int);
void AddFile(char*, int*, int);
int CountingElements(int * const a, int n);
void BubleSortByRemainder(int * A, int P, int a);
void Swap(int & a, int & b);
void SeparateArray(int * const a, int * oldA, int * newA, int n, int S);

int main()
{
	const int N = 30;
	char fileName[N] = "";
	cout << "Enter the name of file: ";
	cin.getline(fileName, N, '\n');
	int n, a;
	cout << "Enter count of th numbers:" << endl;
	cin >> n;
	CreateFile(fileName, n);
	int count = ContentsFile(fileName);
	int* array = InitArray(fileName, count);
	int S = CountingElements(array, n);
	cout << "Count of special elements S =" << S << endl;
	int k = n - S;
	int* OldArray = new int[k];
	int* NewArray = new int[S];
	cout << "Enter remainder a= " << endl;
	cin >> a;
	SeparateArray(array, OldArray, NewArray, n, S);
	BubleSortByRemainder(OldArray, n - S, a);
	AddFile(fileName, OldArray, k);
	/*for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	for (int i = 0; i < count; i++)
		array[i] += 100;
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";*/
	//system("pause");
	return 0;
}

void CreateFile(char* fileName, int n)
{
	ofstream streamOut(fileName);
	//ofstream streamOut;
	//streamOut.open(fileName, ios::out);

	if (!streamOut.is_open())
	{
		cout << "Cannot open file to write!" << endl;
		system("pause");
		exit(1);
	}

	system("cls");
	for (int i = 1; i <= n; i++)
	{
		//cout << "enter value # " << i << " : ";
		//cin >> temp;
		int temp = n - i;
		streamOut.width(5);
		streamOut << temp;
		//cout << temp << endl;
	}

	streamOut.close();
}

int ContentsFile(char* fileName)
{
	ifstream streamIn(fileName);

	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}

	int count = 0, term;

	while (!streamIn.eof())
	{
		streamIn >> term;
		count++;
	}
	streamIn.close();
	return count;
}

int* InitArray(char* fileName, int n)
{
	ifstream streamIn(fileName);
	if (!streamIn.is_open())
	{
		cout << "Cannot open file to read!" << endl;
		system("pause");
		exit(1);
	}
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		streamIn >> arr[i];
	streamIn.close();
	return arr;
}

void BubbleSort(int* arr, int n)//error dimention!
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int x = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = x;
			}
		}
	}
}

void AddFile(char* fileName, int* arr, int n)
{
	ofstream streamOut(fileName, ios::app);

	if (!streamOut.is_open())
	{
		cout << "\nCannot open file to addition!\n";
		system("pause");
		exit(1);
	}
	streamOut << "\nSorted array!\n";
	for (int i = 0; i < n; i++)
	{
		streamOut.width(5);
		streamOut << arr[i];
	}
	streamOut.close();
}

void SeparateArray(int * const a, int * oldA, int * newA, int n, int S)
{
	int j = 0, k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && i % 2 == 0)
		{
			newA[k] = a[i];
			k++;
		}
		else
		{
			oldA[j] = a[i];
			j++;
		}
	}
}

void Swap(int & a, int & b)
{
	int t = a;
	a = b;
	b = t;
}

void BubleSortByRemainder(int * array, int P, int a)
{
	for (int i = 1; i < P; i++)
	{
		for (int j = 0; j < P - i; j++)
		{
			if (array[j] % a < array[j + 1] % a)
			{
				Swap(array[j], array[j + 1]);
			}
		}
	}
}

 int CountingElements(int * const a, int n)
{
	if (n <= 0)
	{
		throw std::out_of_range("Dimension of array must be more zero!");
	}

	if (a == nullptr)
	{
		throw std::invalid_argument("Argument is null!");
	}

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && i % 2 == 0)
		{
			sum++;
		}
	}
	return sum;
}

