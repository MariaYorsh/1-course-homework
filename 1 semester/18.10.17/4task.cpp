#include <iostream>

using namespace std;

long long changeNum(long long n, int b, int c);

int main()
{
	long long a;
	int b, c;
	cout << "Enter number:" << endl;
	cin >> a;
	cout << "Witch number be change?" << endl;
	cin >> b;
	cout << " On which number to replace?" << endl;
	cin >> c;
	long long aa = changeNum(a, b, c);
	cout << aa << endl;

	system("pause");
	return 0;
}
long long changeNum(long long n, int b, int c)
{
	long long num = n, rev = 0;
	int digit, chan = b, rep = c;
	while (num != 0)
	{
		digit = num % 10;
		if (digit == chan)
		{
			digit = rep;
		}
		rev = (rev * 10) + digit;
		num = num / 10;
	}
	num = 0;
	while (rev != 0)
	{
		digit = rev % 10;
		num = (num * 10) + digit;
			rev = rev / 10;
			
	}
	return  num;
}
