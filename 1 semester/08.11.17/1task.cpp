#include <iostream>

using namespace std;

void bubleSort(int array[], int N);
void Swap(int& a, int& b);
void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n);

int main()
{
	const int N = 10;
	int array[N] = { 0 };
	GenerateRandomArray(array, N);
	cout << "Initial array: " << endl;
	DisplayArray(array, N);
	cout << endl;
	bubleSort(array, N);
	cout << "Sorted array: " << endl;
	DisplayArray(array, N);
	system("pause");
	return 0;
}


void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void GenerateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100;
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void bubleSort(int array[], int N)
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				Swap(array[j], array[j + 1]);
			}
		}
	}
}