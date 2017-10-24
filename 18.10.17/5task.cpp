#include <iostream>

using namespace std;

long long deleteNum(long long n, int s);

int main()
{
	long long a;
	int b;
	cout << "Enter number:" << endl;
	cin >> a;
	cout << "Witch number to delete?" << endl;
	cin >> b;
	long long aa = deleteNum(a, b);
	cout << aa << endl;

	system("pause");
	return 0;
}
long long deleteNum(long long n, int s)
{
	long long num = n, rev = 0;
	int digit, del = s;
	while (num != 0)
	{
		digit = num % 10;
		if (digit != del)
		{
			rev = (rev * 10) + digit;
		}
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
