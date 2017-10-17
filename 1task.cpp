#include <iostream>

using namespace std;
int Digit(long s, int d);

int main()
{
	long long n;
	cout << "Enter number n:";
	cin >> n;
	for (int i = 0; i <= 9; i++)
	{
		cout << i << " -> " << Digit(n, i) << endl;
	}

	system("pause");
	return 0;
}
int Digit(long s, int d)
{
	int t = 0;
	while (s > 0)
	{
		int a = s % 10;
		s = s / 10;
		if (a == d)
		{
			t = t + 1;
		}
	}
	return t;
}
