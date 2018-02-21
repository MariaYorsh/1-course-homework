#include <iostream>

using namespace std;

int quantify(int array[], int n, int result[3]);
void Swap(int& a, int& b);
void DisplayArray(int array[], int n);
void GenerateRandomArray(int array[], int n, int range);

int main()
{
	const int N = 30;
	int array[N] = { 0 };
	int res[3];
	GenerateRandomArray(array, N, 100);
	cout << "Initial array: " << endl;
	DisplayArray(array, N);
	cout << endl;
	cout << "Zero, Positive, Negative: " << endl;
	int a = quantify(array, N, res);
	cout << res[0] << "  " << res[1] << "   " << res[2] << endl;
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

void GenerateRandomArray(int array[], int n, int range)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % range - range/2;
	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

int  quantify(int array[], int n, int result[3])
{
	int zer=0, neg=0, pos=0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
		{
			neg++;
		}
		if (array[i] == 0)
		{
			zer++;
		}
		if (array[i] > 0)
		{
			pos++;
		}
	}
	result[0] = zer;
	result[1] = pos;
	result[2] = neg;
	return 0;
}