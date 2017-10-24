#include <iostream>
//Finding palindrome

using namespace std;

bool isPalindrome(long long n);

int main()
{
	long long a;
	cout << "Enter number:" << endl;
	cin >> a;
	if (isPalindrome (a))
	{
		cout << a << " is palindrome" <<endl;

	}
	else
	{
		cout << a << " Is not palindrome" <<endl;
	}
	system("pause");
	return 0;
}

bool isPalindrome(long long n)
{
	long long num = n, rev = 0;
	int digit;
	while (num != 0)
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
 }
	if (n == rev)
		return 1;
	else
		return 0;
}
