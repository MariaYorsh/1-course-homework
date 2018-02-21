#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
	int matrix[N][N] = { 0 };
	int n=5, m=4;
	RandomMatrix(matrix, n, m, 100);
	DisplayMatrix(matrix, n, m);
	cout << "Sorted matrix: " << endl;
	BubleSortMatrix(matrix, n, m);
	DisplayMatrix(matrix, n, m);

	system("pause");
	return 0;
}