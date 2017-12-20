#include <iostream>

using namespace std;

const int N = 20;

void DisplayMatrix(int matrix[][N], int n, int m);
void RandomMatrix(int matrix[][N], int n, int m, int k);
void Swap(int& a, int& b);
int FindMinNumber(int matrix[][N], int n, int m, int k);
void SwapMinNumber(int matrix[][N], int n, int m, int k);

int main()
{
	int matrix[N][N] = { 0 };
	int n, m;
	cout << " Enter n and m, which n>m: " << endl;
	cin >> n;
	cin >> m;
	RandomMatrix(matrix, n, m, 100);
	DisplayMatrix(matrix, n, m);
	int digit = FindMinNumber(matrix, n, m, 0);
	cout << "Min number in k: " << endl;
	cout << digit << endl;
	Swap(digit, matrix[0][0]);
	DisplayMatrix(matrix, n, m);

	system("pause");
	return 0;
}



void DisplayMatrix(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

void RandomMatrix(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % k - k / 2;
		}

	}
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

int FindMinNumber(int matrix[][N], int n, int m, int k)
{
	int i = 0;
	int j = k;
	int minnumber = matrix[i][j];
		while ( i < n)
		{
			if (minnumber > matrix[i + 1][j])
			{
				minnumber = matrix[i + 1][j];
				i++;
			}
			else
			{
				minnumber;
				i++;
			}
		}
	return minnumber;
}

void SwapMinNumber(int matrix[][N], int n, int m, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int digit = FindMinNumber(matrix, n, m, k);
			Swap(digit, matrix[i][j]);
			k++;
		}

	}
}


