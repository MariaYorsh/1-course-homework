#include <iostream>

using namespace std;

void GenerateRandomArray(int array[], int n);
void DisplayArray(int array[], int n);
int FindIndex(int array[], int k, int n);

int main()
{
	const int N = 20;
	int array[N] = { 0 };

	GenerateRandomArray(array, N);
	DisplayArray(array, N);
	cout << endl;
	if (FindIndex(array, 0, N) < 0)
	{
		cout << "Not find" << endl;
	}
	else
	{
		cout << "Index in array is ";
		cout << FindIndex(array, 0, N) << endl;
	}

	system("pause");
	return 0;
}


void GenerateRandomArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100;
	}
}

void DisplayArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
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