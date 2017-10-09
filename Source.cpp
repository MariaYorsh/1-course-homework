#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int n;
	char ok = 'j';
	while (ok == 'j')
	{
		while (true)
		{
			cout << "n=";
			cin >> n;
			if (n != 0 && n > 0)
				break;
			else
				cout << "Invalid data" << endl;
		}
		int a=1 ;
		double b=0, sum = 0;
		for (int i = 1; i <= n; i++)
		{
			a = a*i;
				b = b + 1 / i;
				sum = sum + a / b;
		}
		cout << "1!/1+ ..." << "=" << sum << endl;
		cout << "If countine press j";
		cin >> ok;
	}
	return 0;
}

