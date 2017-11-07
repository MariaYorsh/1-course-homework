
#include <iostream>

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
			if (n != 0)
				break;
		}
		float pow = 1;
		for (int i = 1; i <= n; i++)
		{
			pow = pow*(1 + 1.0 / (i*i));
		}
		cout << "(1+1/(1^2))*..." << "=" << pow << endl;
		cout << "If countine press j";
		cin >> ok;
	}
	return 0;
}
