#include <iostream>

using namespace std;

void InclusionSort(int array[], int N);
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
	InclusionSort(array, N);
	cout << "Sorted array: " << endl;
	DisplayArray(array, N);
	cout << endl;
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

void InclusionSort(int array[], int N)
{
	for (int i = 1; i < N; i++)
	{
		int value = array[i]; 
		int index = i;  
		while ((index > 0) && (array[index - 1] > value))
		{   
			array[index] = array[index - 1];
			index--;   
		}
		array[index] = value;
	}
}
