#include <iostream>

using namespace std;

const int N = 30;

void GenerateRandomArray(int array[], int n, int range);
void DisplayArray(int array[], int n);
void FindNegativeNumbers(int array[], int n);
int FindIndex(int array[], int k, int n);
long MultiplyNumbers(int array[], int n);

int main()
{
	int array[N] = { 0 };

	GenerateRandomArray(array, N, 100);
	DisplayArray(array, N);
	cout << endl;
	FindNegativeNumbers(array, N);
	DisplayArray(array, N);
	cout << endl;
	cout << "Multiplication is " << MultiplyNumbers(array, N) << endl;

	system("pause");
	return 0;
}

void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range/2;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void FindNegativeNumbers(int array[], int n)
{
	int p = FindIndex(array, 0, n) - 1;
	for (int i = p; i < n; i++)
	{

			if (array[i] > 0 || array[i] % 2 != 0 || i % 2 == 0)
			{
				 array[i] = 0;
			}
			else
			{
				array[i];
			}
	}

}

int FindIndex(int array[], int k, int n)
{
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == k)
		{
			index = i + 1;
		}
		else
		{
			index;
		}
	}
	return index;
}

long MultiplyNumbers(int array[], int n)
{
	int p = 1;
	int i = 0;
	FindNegativeNumbers(array, N);
	while ( i < n)
	{
		if (array[i] < 0)
		{
			p = p*array[i];
			i++;
		}
		else
		{
			i++;
		}
	}
	return p;
}