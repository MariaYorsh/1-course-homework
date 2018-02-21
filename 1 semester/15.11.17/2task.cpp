#include <iostream>
#include "lines.h"

using namespace std;

bool equals(char lhs[], char rhs[]);

int main()
{
	const int N = 200;
	char symbolslhs[N] = "", symbolsrhs[N] = "";
	cout << "Enter the strings: " << endl;
	cin.getline(symbolslhs, N, '\n');
	cin.getline(symbolsrhs, N, '\n');
	if (equals(symbolslhs, symbolsrhs))
	{
		cout << "Strings are equal" << endl;
	}
	else
	{
		cout << "Strings are not equal" << endl;
	}
	system("pause");
	return 0;
}

bool equals(char lhs[], char rhs[])
{
	if (getLength(lhs) != getLength(rhs))
	{
		return false;
	 }
	toUpper(lhs);
	toUpper(rhs);

	int l = getLength(lhs);
	int i = 0;
	while(i < l)
	{
		if (lhs[i] == rhs[i])
		{
			i++;
		}
		else
		{
			return false;
		}

	}
	return true;
}