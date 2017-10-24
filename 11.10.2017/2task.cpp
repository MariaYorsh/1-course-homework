<<<<<<< HEAD
#include <iostream>

using namespace std;

bool IsPrime(long);
int main()
{
	long number;

	cout << "Enter an integer (>1):";
	cin >> number;
	if (IsPrime(number))
	{
		cout << number << " is prime" << endl;
	}
	else
	{
		cout << number << " is not prime" << endl;
	}
	system("pause");
	return 0;
}
bool IsPrime (long number)
{
	int i;
	for (i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
=======
#include <iostream>

using namespace std;

bool IsPrime(long);
int main()
{
	long number;

	cout << "Enter an integer (>1):";
	cin >> number;
	if (IsPrime(number))
	{
		cout << number << " is prime" << endl;
	}
	else
	{
		cout << number << " is not prime" << endl;
	}
	system("pause");
	return 0;
}
bool IsPrime (long number)
{
	int i;
	for (i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
>>>>>>> 2a198dd2ed34e0d6b7420164e1100becf5a3f667
