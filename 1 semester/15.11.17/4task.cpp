#include <iostream>
#include "lines.h"

using namespace std;

int stringIndex(char str[], char sub[]);

int main()
{
	const int N = 200;
	char symbolsstr[N] = "", symbolssub[N] = "";
	cout << "Enter the string: " << endl;
	cin.getline(symbolsstr, N, '\n');
	cout << "Enter the substring: " << endl;
	cin.getline(symbolssub, N, '\n');

	cout << "Position is " << stringIndex(symbolsstr, symbolssub) << endl;
	system("pause");
	return 0;
}

int stringIndex(char str[], char sub[] )
{
	int strL = getLength(str), subL = getLength(sub);
	int diff = strL - subL;
	int index = -1;
	toUpper(str);
	toUpper(sub);
	int i = 0, j = 0;
	while (i < diff && index == -1)
	{
		while (j < subL)
		{
			if (str[i] != sub[j])
			{
				i++;
				j = 0;
			}
			else
			{
				i++;
				j++;
			}
		}
		if (j == subL)
		{
			index = i - subL;
		}
	}

	return index;

}
