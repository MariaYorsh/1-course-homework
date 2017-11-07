
#include <iostream>

using namespace std;

int hexCount(int n, char digit);


int main()
{
	int number;
	char t;
	cout << "Enter integer number: " << endl;
	cin >> number;
	cout << "Enter simbol which do you want to find: " << endl;
	cin >> t;
	cout << "Count of simbol in hex code is " << hexCount(number, t) << endl;

	system("pause");
    return 0;
}

int hexCount(int n, char digit)
{
	int sum = 0, p, dig;
	if (digit == '0') dig = 0;
	if (digit == '1') dig = 1;
	if (digit == '2') dig = 2;
	if (digit == '3') dig = 3;
	if (digit == '4') dig = 4;
	if (digit == '5') dig = 5;
	if (digit == '6') dig = 6;
	if (digit == '7') dig = 7;
	if (digit == '8') dig = 8;
	if (digit == '9') dig = 9;
	if (digit == 'A' || digit == 'a') dig = 10;
	if (digit == 'B' || digit == 'b') dig = 11;
	if (digit == 'C' || digit == 'c') dig = 12;
	if (digit == 'D' || digit == 'd') dig = 13;
	if (digit == 'E' || digit == 'e') dig = 14;
	if (digit == 'F' || digit == 'f') dig = 15;


	{
		while (n > 0)
		{
			p = n % 16;
			if (p == dig)
			{
				sum++;
			}
			n = n / 16;
		}
	}
	return sum;
}