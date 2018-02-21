<<<<<<< HEAD
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
=======
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
>>>>>>> 2a198dd2ed34e0d6b7420164e1100becf5a3f667
