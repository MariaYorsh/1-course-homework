#include <iostream>

using namespace std;

const int N = 20;

void DisplayMatrix(int matrix[][N], int n, int m);
void RandomMatrix(int matrix[][N], int n, int m, int k);
void Swap(int& a, int& b);
void GenerateMatrixDouble(int matrix[][N], int n, int m);
void ReplaceNumbers(int matrix[][N], int n, int m, int p);

int main()
{
	int matrix[N][N] = { 0 };
	int n, m, p;
	cout << " Enter n and m, which n>m: " << endl;
	cin >> n;
	cin >> m;
	GenerateMatrixDouble(matrix, n, m);
	DisplayMatrix(matrix, n, m);
	cout << endl;
	cout << " Enter number smaller, than m: " << endl;
	cin >> p;
	ReplaceNumbers(matrix, n, m, p);
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
			matrix[i][j] = i*10 + j;
		}

	}

	for (int i = n / 2; i < n; i++)
	{
		for (int j = 0; j <= n - 1; j++)
		{
			matrix[i][j] = 8;
		}
	}
}

void ReplaceNumbers(int matrix[][N], int n, int m, int p)
{
	for (int i = 0; i < p; i++)
	{
		for (int j = m - p + i; j <=  m - 1; j++)
		{
			Swap(matrix[i][j], matrix[n - i - 1][m - j - 1]);
		}
	}
}