#include <iostream>
#include "lines.h"

using namespace std;

int stringCompare(char lhs[], char rhs[]);

int main()
{
	const int N = 200;
	char symbolslhs[N] = "", symbolsrhs[N] = "";
	cout << "Enter the strings: " << endl;
	cin.getline(symbolslhs, N, '\n');
	cin.getline(symbolsrhs, N, '\n');
	if (stringCompare(symbolslhs, symbolsrhs) > 0)
	{
		cout << symbolslhs  << " > " << symbolsrhs << endl;
	}
	else if(stringCompare(symbolslhs, symbolsrhs) < 0)
	{
		cout << symbolslhs << " < " << symbolsrhs << endl;
	}
	else
	{
		cout << symbolslhs <<  " = " << symbolsrhs << endl;
	}
	system("pause");
	return 0;
}

int stringCompare(char lhs[], char rhs[])
{

	int lenR = getLength(rhs), lenL = getLength(lhs);
	int min = 0;
	if (lenR <= lenL)
	{
		min = lenR;
	}
	else
	{
		min = lenL;
	}

	toUpper(lhs);
	toUpper(rhs);
	int i = 0;
	int flag = 0;
	while ((i <= min) && (flag == 0))
	{
		if (lhs[i] > rhs[i])
		{
			flag = 1;
		}
		else if (lhs[i] < rhs[i])
		{
			flag = -1;
		}
		i++;
	}
	return flag;
}