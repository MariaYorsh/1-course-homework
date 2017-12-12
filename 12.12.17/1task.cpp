#include <iostream>
#include "matrix.h"

using namespace std;

void ShiftMatrix(int matrix[][N], int n);
void ReplaceMatrix(int matrix[][N], int n);
void DisplayMatrix(int matrix[][N], int n);
void GenerateMatrixFour(int matrix[][N], int n);


int main()
{
	int matrix[N][N] = { 0 };
	int n = 10;

	GenerateMatrixFour(matrix, n);
	DisplayMatrix(matrix, n);
	cout << endl;
	ReplaceMatrix(matrix, n);
	DisplayMatrix(matrix, n);
	cout << endl;
	ShiftMatrix(matrix, n);
	DisplayMatrix(matrix, n);

	system("pause");
	return 0;
}



void DisplayMatrix(int matrix[][N], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void GenerateMatrixFour(int matrix[][N], int n)
{
	int k = (n % 2) ? n / 2 + 1 : n / 2;

	for (int i = 0; i<k; i++)
	{
		for (int j = 0; j< n / 2; j++)
		{
			matrix[i][j] = 1;
		}

	}

	for (int i = k; i<n; i++)
	{
		for (int j = 0; j <= n / 2 - 1; j++)
		{
			matrix[i][j] = 2;
		}
	}

	for (int i = 0; i<k; i++)
	{
		for (int j = k; j< n; j++)
		{
			matrix[i][j] = 3;
		}

	}

	for (int i = k; i<n; i++)
	{
		for (int j = k; j< n; j++)
		{
			matrix[i][j] = 4;
		}

	}


}





void ReplaceMatrix(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			Swap(matrix[i][j], matrix[n / 2 + i][n / 2 + j]);
			Swap(matrix[i + n/2][j], matrix[i][j + n/2]);
		}
	}

}

void ShiftMatrix(int matrix[][N], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			Swap(matrix[i][j], matrix[i + n/2][j]);
			Swap(matrix[i][j + n/2], matrix[i + n/2][j + n / 2]);
		}
	}

	for (int i = 0; i < n / 2; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
		//	Swap(matrix[i][j], matrix[i][n / 2 + j]);
			Swap(matrix[i + n / 2][j], matrix[i][j + n / 2]);
		}
	}
}