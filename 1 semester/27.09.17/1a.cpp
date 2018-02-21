
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
		float sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum = sum + 1.0 / i;
		}
		cout << "1/1 + 1/2 + ..." << "=" << sum << endl;
		cout << "If countine press j";
		cin >> ok;
	}
	return 0;
}