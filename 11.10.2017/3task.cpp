<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
	long s1 = 0, s2 = 1, nexts = 0, n;
	cout << "Enter number n:";
	cin >> n;
	nexts = s1 + s2;
	while (nexts <= n)
	{
		s1 = s2;
		s2 = nexts;
		nexts = s1 + s2;
		if (nexts >= n)
		{
			cout << "Fibonacci number is >= n: ";
			cout << nexts <<endl ;
			break;
		}
	}
	system("pause");
	return 0;
=======
#include <iostream>

using namespace std;

int main()
{
	long s1 = 0, s2 = 1, nexts = 0, n;
	cout << "Enter number n:";
	cin >> n;
	nexts = s1 + s2;
	while (nexts <= n)
	{
		s1 = s2;
		s2 = nexts;
		nexts = s1 + s2;
		if (nexts >= n)
		{
			cout << "Fibonacci number is >= n: ";
			cout << nexts <<endl ;
			break;
		}
	}
	system("pause");
	return 0;
>>>>>>> 2a198dd2ed34e0d6b7420164e1100becf5a3f667
}