#include <iostream>

using namespace std;

const int N = 20;

void GenerateRandomArray(int array[], int n, int range);
void DisplayArray(int array[], int n);
void BubleSort(int array[], int N);
void Swap(int& a, int& b);


int main()
{
	int array[N] = { 0 };

	GenerateRandomArray(array, N, 100);
	DisplayArray(array, N);
	cout << endl;
	cout << "New array: " << endl;
    BubleSort( array,N);
	DisplayArray(array, N);
	cout << endl;

	system("pause");
	return 0;
}


void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void BubleSort(int array[], int N)
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			if ( array[j] == 0)
			{
				Swap(array[j + 1], array[j]);
			}
		}
	}
}

