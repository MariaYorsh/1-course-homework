#include <iostream>

using namespace std;

const int N = 20;

void GenerateRandomArray(int array[], int n, int range);
void DisplayArray(int array[], int n);
void DeletePositiveNumbers(int array[], int n);

int main()
{
	int array[N] = { 0 };

	GenerateRandomArray(array, N, 100);
	DisplayArray(array, N);
	cout << endl;
	cout << "New array: " << endl;
	DeletePositiveNumbers(array, N);
	DisplayArray(array, N);
	cout << endl;

	system("pause");
	return 0;
}


void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range / 2;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}


void DeletePositiveNumbers(int array[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if (array[i] > 0)
		{
			while (i < n)
			{
				array[i] = array[i + 1];
				n--;
				++i;
			}
		}
	}
}