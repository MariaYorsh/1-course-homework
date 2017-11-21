#include <iostream>

using namespace std;

void DirectInclusionSort(int array[], int N);
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
	DirectInclusionSort(array, N);
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

void DirectInclusionSort(int array[], int N)
{
	for (int i = 1; i <= N - 1; i++)
	{
		int minpos = i - 1;
		for (int j = i; j < N; j++)
		{
			if (array[j] < array[minpos])
			{
				minpos = j;
			}
		}
		Swap(array[i - 1], array[minpos]);
	}
}