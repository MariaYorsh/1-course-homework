#include <iostream>

using namespace std;

const int N = 20;

void DisplayMatrix(int matrix[][N], int n, int m);
void RandomMatrix(int matrix[][N], int n, int m, int k);
void Swap(int& a, int& b);
void GenerateMatrixDouble(int matrix[][N], int n, int m);
void ReplaceNumbers(int matrix[][N], int n, int m);

int main()
{
	int matrix[N][N] = { 0 };
	int n, m;
	cout << " Enter n and m, which n>m: " << endl;
	cin >> n;
	cin >> m;
	GenerateMatrixDouble(matrix, n, m);
	DisplayMatrix(matrix, n, m);
	cout << endl;
	ReplaceNumbers(matrix, n, m);
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


void GenerateMatrixDouble(int matrix[][N], int n, int m)
{

	for (int i = 0; i < n /2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			matrix[i][j] = 1;
		}

	}

	for (int i = n / 2; i < n; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			matrix[i][j] = 2;
		}
	}
}

void ReplaceNumbers(int matrix[][N], int n, int m)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0 ; j < m - 1; j++)
		{
			Swap(matrix[i][j + 1], matrix[n / 2 + i][j + i]);
		}
	}
}