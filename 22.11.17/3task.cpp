#include <iostream>
#include "lines.h"

using namespace std;

//void strReplaceBySize(char str[], int l, char sub[]);

int main()
{
	char str[N] = "36 hi, cold.. cold winter, cool";
	char sub[N] = "";
	int a = 0;
	cout << "Enter length of string: " << endl;
	cin >> a;
	cout << "Enter substring: " << endl;
	cin >> sub;

	strReplaceBySize(str, a, sub);

	cout << str << endl;
	system("pause");
	return 0;
}



